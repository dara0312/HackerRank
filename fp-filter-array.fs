open System

let rec ReadX n =
    let read _ = Console.ReadLine()
    let isValid = function null -> false | _ -> true
    let inputList = Seq.initInfinite read |> Seq.takeWhile isValid |> Seq.toList
    let list2 = inputList |> List.filter (fun x -> (System.Int32.Parse(x)) < n)
    Seq.iter (fun i -> printfn "%s " i) list2


[<EntryPoint>]
let main argv =
    let n = Console.ReadLine() |> int
    ReadX n
    0
