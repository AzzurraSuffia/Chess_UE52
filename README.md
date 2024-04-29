# Chess_UE52
 
Progetto del corso di PAA per l'anno accademico 2023/2024 (numero di matricola: 5341007).

Sono state implementate come funzionalità aggiuntive la presa En Passant e lo Stalemate. 

Note sul progetto:
- Per lo storico delle mosse è stata utilizzata la Long Algebraic Notation.
- Quando è il proprio turno, si può selezionare il pezzo cliccando su di esso. Verrano così mostrate tutte le mosse possibili per quel pezzo. Per muovere, cliccare su una cella tra 
  quelle suggerite. Per cambiare pezzo, cliccare nuovamente sul pezzo precedente per chiudere la visualizzazione delle sue mosse e selezionare il prossimo.
- Cliccando sui bottoni presenti nello storico delle mosse, lo stato della scacchiera viene modificato ritornando alla configurazione in cui la mossa cliccata era l'ultima ad essere 
  stata eseguita. Per poter riprendere la partita da quel punto (replay) muovere un pezzo se è il proprio turno. Nel caso in cui la mossa cliccata non fosse dell'avversario, non verrà 
  data l'opportunità di muovere i pezzi. 
- Se la partita termina con uno scacco matto, è possibile visualizzare le mosse cliccando su di esse, mentre non sarà più possibile tornare indietro e fare replay. Inoltre, cliccando
  sul pulsante 'Restart' sarà possibile ricominciare a giocare. Se la partita termina con uno stallo, dopo 3 secondi verrà in automatico generata una nuova partita. 

