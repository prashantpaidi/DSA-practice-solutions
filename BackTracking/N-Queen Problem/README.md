https://practice.geeksforgeeks.org/problems/n-queen-problem0315/1/#




if safe
`
Begin
   if there is a queen at the left of current col, then
      return false
   if there is a queen at the left upper diagonal, then
      return false
   if there is a queen at the left lower diagonal, then
      return false;
   return true //otherwise it is valid place
End
`


solve()
`
Begin
   if all columns are filled, then
      return true
   for each row of the board, do
      if isValid(board, i, col), then
         set queen at place (i, col) in the board
         if solveNQueen(board, col+1) = true, then
            return true
         otherwise remove queen from place (i, col) from board.
   done
   return false
End

`