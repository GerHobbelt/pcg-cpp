// exec as:
//
//        for f in *.cpp ; do g=$( echo $f | sed 's/[.]cpp//' ) ; echo $g ; node ./patch.js $g $f ; done
//

let fs = require("fs")
let path = require("path")

let name = process.argv[2];
name = name
.replace(/-/g, '_');
let fname = process.argv[3];
console.log("name, etc:", name, fname);

let src = fs.readFileSync(fname, "utf8");

src = src
.replace(/#include /, function f(m) {
	console.log("match:", m);

	return `
#define RNGNAME pcg_${name}_main

#include `;
});

console.log(src);

fs.writeFileSync(fname, src, "utf8");


