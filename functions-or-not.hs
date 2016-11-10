import Control.Monad
import Data.List

run = do
    t <- readLn
    s <- replicateM t $ fmap (head . map read . words) getLine :: IO [Int]
    if s == nub s
        then putStrLn "YES"
        else putStrLn "NO"

main = readLn >>= flip replicateM_ run


///

import Control.Monad
import Data.Function
import Data.Functor
import Data.List
import Data.Maybe
import qualified Data.Map as DM

f dm [x,y] =
  if DM.member x dm
  then DM.insertWith (\y yy -> if y == yy then y else (-1)) x y dm
  else DM.insert x y dm

run = do
  t <- readLn
  s <- replicateM t $ (map (read :: String -> Int) . words) <$> getLine
  putStrLn $ if isNothing . findIndex (<0) . DM.elems $ foldl f DM.empty s then "YES" else "NO"

main = readLn >>= flip replicateM_ run
