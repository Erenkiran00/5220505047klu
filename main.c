
//
//  main.c
//  5220505047KLU
//
//  Created by eren kiran on 23.12.2023.
//

#include <stdio.h>
#include <stdlib.h>
int main() {

      typedef struct {
      int teklifveren_sayisi;
      double teklif;
    } Teklif;
      
      int teklif_sayisi;
      printf("Teklif veren sayisini girin: ");
      scanf("%d", &teklif_sayisi);

     
      Teklif teklifler[teklif_sayisi];

      int i;
       for (i = 0; i < teklif_sayisi; i++) {
        printf("Teklif veren %d, teklifinizi girin: ", i + 1);
        scanf("%lf", &teklifler[i].teklif);
      }

    
      double en_yuksek_teklif = teklifler[0].teklif;
      int kazanan_teklifveren_no = teklifler[0].teklifveren_sayisi;
    
       for (i = 1; i < teklif_sayisi; i++) {
        if (teklifler[i].teklif > en_yuksek_teklif) {
          en_yuksek_teklif = teklifler[i].teklif;
          kazanan_teklifveren_no = teklifler[i].teklifveren_sayisi;
        }
      }

    
      printf("Kazanan teklif veren: %d\n", kazanan_teklifveren_no);
      printf("odeme: %.2f TL\n", en_yuksek_teklif);

      return 0;
    }



