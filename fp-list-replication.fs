open System

let rec ReadX n =
    let read _ = Console.ReadLine()
    let isValid = function null -> false | _ -> true
    let inputList = Seq.initInfinite read |> Seq.takeWhile isValid |> Seq.toList
    for i in 0 .. (inputList.Length-1) do
        for j in 1 .. n do
            printfn "%s" (inputList.Item(i))

[<EntryPoint>]
let main argv =
    let n = Console.ReadLine() |> int
    ReadX n
    0
