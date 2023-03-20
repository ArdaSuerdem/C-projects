#include <stdio.h>

// X O X  || S O S
//  1 2 3
//  4 5 6
//  7 8 9

int main()
{
    // X O X tablosu
    char board[3][3] = {
        {'-', '-', '-'},
        {'-', '-', '-'},
        {'-', '-', '-'}
        }; //oyun tablosu

    // KullanÄ±clÄ±lar
    char player1 = 'X';
    char player2 = 'O';
    

    int statusFlag = 1; //oyunun kontrol edilmesi iÃ§in kullanÄ±lacak
    
    while (statusFlag)
    {   
        int sira = 1; //oyunun sÄ±rasÄ±
        //print board
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }
    
        int hamle;
        b1:
        if (sira % 2 != 0)
        {
             printf("Player 1: ");
        }else
        {
            printf("Player 2: ");
        }
        
        scanf("%d", &hamle);

        //switch case icerisinde hamlelerin yapÄ±lmasÄ± ve kontrol edilmesi gerekiyor 6 marta kadar
        
        switch (hamle)
        {
        case 1:
            {
             if(board[0][0] == '-')
                board[0][0] = sira % 2 != 0 ? player1 : player2;
             else
                printf("Hamle yapilamaz\n");
                break;
            }
		case 2:
            {
            	if(board[0][1] == '-')
                board[0][1] = sira % 2 == 0 ? player2 : player1;
                else
                printf("Hamle yapılamaz\n");
                break;
            }
		case 3:
            {
            	if(board[0][2] == '-')
                board[0][2] = sira % 2 == 0 ? player2 : player1;
                else
                printf("Hamle yapılamaz\n");
                break;
            } 
		case 4:
            {
            	if(board[1][0] == '-')
                board[1][0] = sira % 2 == 0 ? player2 : player1;
                else
                printf("Hamle yapılamaz\n");
                break;
            }
		case 5:
            {
            	if(board[1][1] == '-')
                board[1][1] = sira % 2 == 0 ? player2 : player1;
                else
                printf("Hamle yapılamaz\n");
                break;
            }
		case 6:
            {
            	if(board[1][2] == '-')
                board[1][2] = sira % 2 == 0 ? player2 : player1;
                else
                printf("Hamle yapılamaz\n");
                break;
            }
		case 7:
            {
            	if(board[2][0] == '-')
                board[2][0] = sira % 2 == 0 ? player2 : player1;
                else
                printf("Hamle yapılamaz\n");
                break;
            }
		case 8:
            {
            	if(board[2][1] == '-')
                board[2][1] = sira % 2 == 0 ? player2 : player1;
                else
                printf("Hamle yapılamaz\n");
                break;
            }
		case 9:
            {
            	if(board[2][2] == '-')
                board[2][2] = sira % 2 == 0 ? player2 : player1;
                else
                printf("Hamle yapılamaz\n");
                break;
            }   
        default:
            break;
        }

         for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("%c ", board[i][j]);
            }
            printf("\n");
        }

        //burada kazanma durumu kontrolü olacak
    	if ((board [0][0] == board [1][1] && board [0][0]== board [2][2]) && board [0][0] != '-')
      	printf("Game Over");
        else if((board [2][0] == board [1][1] && board [2][0]== board [0][2]) && board [2][0] != '-')
      	printf("Game Over");
        else if ((board [0][0] == board [0][1] && board [0][0]== board [0][2])&& board [0][0] != '-')
      	printf("Game Over");
      	else if ((board [0][0] == board [1][0] && board [0][0]== board [2][0])&& board [0][0] != '-')
      	printf("Game Over");
      	else if ((board [0][1] == board [1][1] && board [0][1]== board [2][1])&& board [0][1] != '-')
      	printf("Game Over");
      	else if ((board [0][2] == board [1][2] && board [0][2]== board [2][2])&& board [0][2] != '-')
      	printf("Game Over");
      	else if ((board [1][0] == board [1][1] && board [1][0]== board [1][2])&& board [1][0] != '-')
      	printf("Game Over");
      	else if ((board [2][0] == board [2][1] && board [2][0]== board [2][2])&& board [2][0] != '-')
      	printf("Game Over");
	   else{
		sira++;
        goto b1;  }
        statusFlag = 0;  
    }
    
    
    
    
    return 0;
}
