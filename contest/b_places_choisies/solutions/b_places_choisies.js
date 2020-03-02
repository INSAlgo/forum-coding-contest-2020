function main(input) {
    
    	lines = input.split("\n")
   	let n = Number(lines[0])
	let h = Number(lines[1].split(" ")[0])
	let c = Number(lines[1].split(" ")[1])

	let hCurr = 0
	let cCurr = 0
	let i = 0

	while(hCurr <= h && cCurr <= c && i < n){
		let char = lines[i + 2]
		if(char === 'H'){		
			hCurr++
		}else if (char === 'C'){
			cCurr++
		}
		i++
	}

	if(hCurr > h || cCurr > c)
		console.log("NON")
	else
		console.log("OUI")
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