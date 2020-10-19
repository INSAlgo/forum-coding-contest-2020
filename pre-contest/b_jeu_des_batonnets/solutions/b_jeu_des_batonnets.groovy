def reader = System.in.newReader()

def (nb, b) = reader.readLine().split(' ').collect { it as Integer }
def j = reader.readLine() as Integer

int div(int a, int b) {
    Math.floor(a / b)
}

if ((j==0 && (div(nb-b, b+1) - div(nb-1, b+1) < 0 || (nb-b) % (b+1) == 0))
    || (j==1 && (div(nb-b, b+1) - div(nb-1, b+1) == 0 && (nb-b) % (b+1) != 0))) {
    println "OUI"
}
else {
    println "NON"
}
