open System

let main() =
    let read _ = Console.ReadLine()
    let isValid = function null -> false | _ -> true
    let inputList = Seq.initInfinite read |> Seq.takeWhile isValid |> Seq.toList
    let revList = (List.rev inputList)
    Seq.iter (fun i -> printfn "%s " i) revList

main()
