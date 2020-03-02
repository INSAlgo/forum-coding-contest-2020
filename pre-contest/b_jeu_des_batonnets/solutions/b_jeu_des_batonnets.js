function main(input) {
    
    lines = input.split("\n")
    let nb = Number(lines[0].split(" ")[0])
    let b = Number(lines[0].split(" ")[1])
    let j = Number(lines[1])
  if ((j == 0 &&  (Math.floor((nb - b)/(b + 1)) - Math.floor((nb - 1)/(b + 1)) < 0 || (nb - b) % (b + 1) == 0)) || (j==1 && (Math.floor((nb - b)/(b + 1)) - Math.floor((nb - 1)/(b + 1)) == 0 && (nb - b) % (b + 1) != 0)))
    console.log("victoire assuree");
  else
    console.log("victoire non assuree");
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