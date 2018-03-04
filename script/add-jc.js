const fs = require('fs');
var insns = require('../insns.json');

insns.instructions.forEach(function (insn) {
    var latency = 0;
    var issue = 0;

    if (insn.SH2 === true) insn.J32 = true;
    else if (insn.format.startsWith('shad')) insn.J32 = true;
    else if (insn.format.startsWith('shld')) insn.J32 = true;
    else insn.J32 = false;

    if (insn.J32)
    {
	latency = insn["SH2.latency"];
	issue = insn["SH2.issue"];
    }

    insn["J32.latency"] = latency;
    insn["J32.issue"] = issue;
});

fs.writeFile("insns-jc.json", JSON.stringify(insns, null, 2), function (err) {
    if (err) console.log(err);
    console.log("Done writing file");
});
