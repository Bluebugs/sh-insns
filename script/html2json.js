const htmlToJson = require('html-to-json')
const fs = require('fs');

var promise = htmlToJson.request({ uri: 'http://www.shared-ptr.com/sh_insns.html' },
				 { 'instructions' : ['.col_cont', {
				     'SH1': function($instr) {
					 return $instr.find(".col_cont_1").text().indexOf('SH1') !== -1 ? true : false ;
				     },
				     'SH1.issue': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH1') !== -1)
					     return parseInt($instr.find(".col_cont_7").text().substr(0, 1));
					 return 0;
				     },
				     'SH1.latency': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH1') !== -1)
					     return parseInt($instr.find(".col_cont_8").text().substr(0, 1));
					 return 0;
				     },
				     'SH2': function($instr) {
					 return $instr.find(".col_cont_1").text().indexOf('SH2 ') !== -1 ? true : false ;
				     },
				     'SH2.issue': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH2 ') !== -1)
					     return parseInt($instr.find(".col_cont_7").text().substr(6, 1));
					 return 0;
				     },
				     'SH2.latency': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH2 ') !== -1)
					     return parseInt($instr.find(".col_cont_8").text().substr(6, 1));
					 return 0;
				     },
				     'SH2E': function($instr) {
					 return $instr.find(".col_cont_1").text().indexOf('SH2E') !== -1 ? true : false ;
				     },
				     'SH2E.issue': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH2E') !== -1)
					     return parseInt($instr.find(".col_cont_7").text().substr(12, 1));
					 return 0;
				     },
				     'SH2E.latency': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH2E') !== -1)
					     return parseInt($instr.find(".col_cont_8").text().substr(12, 1));
					 return 0;
				     },
				     'SH3': function($instr) {
					 return $instr.find(".col_cont_1").text().indexOf('SH3 ') !== -1 ? true : false ;
				     },
				     'SH3.issue': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH3 ') !== -1)
					     return parseInt($instr.find(".col_cont_7").text().substr(19, 1));
					 return 0;
				     },
				     'SH3.latency': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH3 ') !== -1)
					     return parseInt($instr.find(".col_cont_8").text().substr(19, 1));
					 return 0;
				     },
				     'SH3E': function($instr) {
					 return $instr.find(".col_cont_1").text().indexOf('SH3E') !== -1 ? true : false ;
				     },
				     'SH3E.issue': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH3E') !== -1)
					     return parseInt($instr.find(".col_cont_7").text().substr(25, 1));
					 return 0;
				     },
				     'SH3E.latency': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH3E') !== -1)
					     return parseInt($instr.find(".col_cont_8").text().substr(25, 1));
					 return 0;
				     },
				     'SH4': function($instr) {
					 return $instr.find(".col_cont_1").text().indexOf('SH4 ') !== -1 ? true : false ;
				     },
				     'SH4.issue': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH4 ') !== -1)
					     return parseInt($instr.find(".col_cont_7").text().substr(38, 1));
					 return 0;
				     },
				     'SH4.latency': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH4 ') !== -1)
					     return parseInt($instr.find(".col_cont_8").text().substr(38, 1));
					 return 0;
				     },
				     'SH4A': function($instr) {
					 return $instr.find(".col_cont_1").text().indexOf('SH4A') !== -1 ? true : false ;
				     },
				     'SH4A.issue': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH4A') !== -1)
					     return parseInt($instr.find(".col_cont_7").text().substr(44, 1));
					 return 0;
				     },
				     'SH4A.latency': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH4A') !== -1)
					     return parseInt($instr.find(".col_cont_8").text().substr(44, 1));
					 return 0;
				     },
				     'SH2A': function($instr) {
					 return $instr.find(".col_cont_1").text().indexOf('SH2A') !== -1 ? true : false ;
				     },
				     'SH2A.issue': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH2A') !== -1)
					     return parseInt($instr.find(".col_cont_7").text().substr(50, 1));
					 return 0;
				     },
				     'SH2A.latency': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('SH2A') !== -1)
					     return parseInt($instr.find(".col_cont_8").text().substr(50, 1));
					 return 0;
				     },
				     'DSP': function($instr) {
					 return $instr.find(".col_cont_1").text().indexOf('DSP') !== -1 ? true : false ;
				     },
				     'DSP.issue': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('DSP') !== -1)
					     return parseInt($instr.find(".col_cont_7").text().substr(31, 1));
					 return 0;
				     },
				     'DSP.latency': function($instr) {
					 if ($instr.find(".col_cont_1").text().indexOf('DSP') !== -1)
					     return parseInt($instr.find(".col_cont_8").text().substr(31, 1));
					 return 0;
				     },
				     'format': function($instr) {
					 return $instr.find(".col_cont_2").text();
				     },
				     'abstract': function($instr) {
					 return $instr.find(".col_cont_3").text();
				     },
				     'code': function($instr) {
					 return $instr.find(".col_cont_4").text();
				     },
				     'T': function($instr) {
					 switch ($instr.find(".col_cont_5").text())
					 {
					     case "Result\n": return "result";
					     case "Carry\n": return "carry";
					     case "Overflow\n": return "overflow";
					     case "Underflow\n": return "underflow";
					     case "0\n": return "0";
					     case "Borrow\n": return "borrow";
					     default: return "-";
					 }
				     },
				     'description': function($instr) {
					 var tmp = $instr.find(".col_cont_note").text();
					 var end = tmp.indexOf("Operation");

					 if (end !== -1)
					     return tmp.substring(12, end).replace(new RegExp('\n','g'), '<br />');;
					 return tmp;
				     },
				     'operation': function($instr) {
					 return $instr.find(".col_cont_note").find(".precode").html();
				     }
				 }]
				 });
				 

console.log("Processing...");

promise.then(function (json) {
    fs.writeFile("insns.json", JSON.stringify(json, null, 2), function (err) {
	if (err) console.log(err);
	console.log("Done writing file");
    });
});
