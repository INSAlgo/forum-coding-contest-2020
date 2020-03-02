function main(input) {
    
    	lines = input.split("\n")
	let L = Number(lines[0].split(" ")[0])
	let C = Number(lines[0].split(" ")[1])
	
	let maxByColumn = new Array(C).fill(0)

	for(row = 0; row < L; row++){
		input = lines[row + 1]
		numbers = input.split(" ")
		for(index = 0; index < C; index++){
			maxByColumn[index] = Math.max(maxByColumn[index], Number(numbers[index]))
		}
	 }

	let H = Number(lines[L + 1])

	hostess = new Array()
	
	for(i = 0; i < H; i++){
		let val = Number(lines[L + 2 + i])
		hostess.push(val);
	}
	
	maxByColumn.sort(function(a,b){return b-a}) //reverse sort
	hostess.sort(function(a,b){return b-a}) //reverse sort

	for(i = 0; i < C; i++){
		if(hostess[i] < maxByColumn[i]){
			console.log("NON")			
			return
		}
	}
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