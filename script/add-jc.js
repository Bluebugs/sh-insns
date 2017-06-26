const fs = require('fs');
var insns = require('../insns.json');

insns.instructions.forEach(function (insn) {
    var latency = 0;
    var issue = 0;

    if (insn.SH2 === true) insn.JC = true;
    else if (insn.format.startsWith('shad')) insn.JC = true;
    else if (insn.format.startsWith('shld')) insn.JC = true;
    else insn.JC = false;

    if (insn.JC)
    {
	latency = insn["SH2.latency"];
	issue = insn["SH2.issue"];
    }

    insn["JC.latency"] = latency;
    insn["JC.issue"] = issue;
});

fs.writeFile("insns-jc.json", JSON.stringify(insns, null, 2), function (err) {
    if (err) console.log(err);
    console.log("Done writing file");
});
