open System

[<EntryPoint>]
let main argv =
    let N = Console.ReadLine() |> int
    for i in 1 .. N do
      printfn "Hello World"
    0 
