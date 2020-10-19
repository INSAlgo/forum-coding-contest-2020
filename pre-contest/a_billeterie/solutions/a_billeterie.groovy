def reader = System.in.newReader()

def prix2nde = reader.readLine() as int
def prix1ere = reader.readLine() as int

def nbBillets2nde = reader.readLine() as int
def nbBillets1ere = reader.readLine() as int

def prixTotal = prix2nde * nbBillets2nde + prix1ere * nbBillets1ere
println prixTotal

