readInt = fn -> IO.read(:stdio, :line) |> String.trim() |> String.to_integer() end

prix2nde = readInt.()
prix1ere = readInt.()

nbBillets2nde = readInt.()
nbBillets1ere = readInt.()

prixTotal = prix2nde * nbBillets2nde + prix1ere * nbBillets1ere
IO.puts(prixTotal)
