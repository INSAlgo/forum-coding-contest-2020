[nb, b] =
  IO.read(:stdio, :line)
  |> String.split(" ")
  |> Enum.map(&String.trim/1)
  |> Enum.map(&String.to_integer/1)

j = IO.read(:stdio, :line) |> String.trim()

d = &Integer.floor_div/2

if (j == "0" && (d.(nb - b, b + 1) - d.(nb - 1, b + 1) < 0 || rem(nb - b, b + 1) == 0)) ||
     (j == "1" && (d.(nb - b, b + 1) - d.(nb - 1, b + 1) == 0 && rem(nb - b, b + 1) != 0)) do
  IO.puts("OUI")
else
  IO.puts("NON")
end
