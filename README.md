# Chess_UE52

DAA course project for the academic year 2023/2024.

The following additional features have been implemented: **En Passant capture** and **Stalemate**.

## Project Notes
- **Long Algebraic Notation** was used for the move history.
- When it is your turn, you can select a piece by clicking on it. All possible moves for that piece will be displayed. To move, click on one of the suggested squares. To change the selected piece, click again on the previously selected piece to close its move visualization and then select another one.
- By clicking on the buttons in the move history, the state of the chessboard is modified, returning to the configuration in which the selected move was the last one executed. To resume the game from that point (replay), move a piece if it is your turn. If the selected move is not the opponent’s move, you will not be allowed to move any pieces.
- If the game ends in **checkmate**, it is possible to view the moves by clicking on them, but it will no longer be possible to go back and replay the game. Additionally, by clicking the **Restart** button, a new game can be started. If the game ends in **stalemate**, a new game will be automatically generated after 3 seconds.

