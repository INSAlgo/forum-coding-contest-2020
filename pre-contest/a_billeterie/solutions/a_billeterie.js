function main(input) {
    
    	lines = input.split("\n")
   	let prix2nde = Number(lines[0])
	let prix1ere = Number(lines[1])
	let nbBillets2nde = Number(lines[2])
	let nbBillets1ere = Number(lines[3])

	console.log((prix2nde * nbBillets2nde) + (prix1ere * nbBillets1ere))
}

process.stdin.resume();
process.stdin.setEncoding("utf-8");
var stdin_input = "";

process.stdin.on("data", function (input) {
    stdin_input += input;
});

process.stdin.on("end", function () {
   main(stdin_input);
});