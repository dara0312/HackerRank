open System

let f n = [0 .. n-1]


let main() =
    let input = Console.ReadLine()
    let n = int input
    printf "%s" "["
    for i in 0 .. (f n).Length-1 do
        printf "%d" ((f n).Item(i))
        if i < (f n).Length-1 then
            printf "%s" ", "
    printf "%s" "]"
    //printfn "%A" (f n)
    //printfn "%d" (f n).Length


main()
