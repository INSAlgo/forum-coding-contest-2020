function main(input) {
    
    lines = input.split("\n")
    let s = lines[0]
    let r = 0
    for (var i = 0; i < s.length; i++) {
    	if (s.charAt(i) === '-'){
        	r += 1
    	}else if(r > 0) {
        	console.log(r)
        	r = 0
        }
    }
    console.log(r)
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