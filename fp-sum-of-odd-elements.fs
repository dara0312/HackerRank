open System

(*USER CODE BEGIN*)
let f arr = arr |> List.filter (fun x -> (x % 2 <> 0)) |> List.sum
(*USER CODE END*)

let read_and_parse()=
    let mutable arr = []
    let mutable buff = Console.ReadLine()
    while buff <> null do
            arr <- Int32.Parse(buff)::arr
            buff <- Console.ReadLine()
    arr

let main =
    let arr = read_and_parse()
    printf "%A" <| f arr
