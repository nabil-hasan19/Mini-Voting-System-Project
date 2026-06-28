#include <stdio.h>

int al=0,bnp=0,jp=0;

void electionResult() {

    int wonByVote;
    if(al > bnp && al > jp) {
        printf("\n***Bangladesh Awami League Won The Election***\n\n");
        printf("Total vote of Bangladesh Awami League: %d\n", al);
        wonByVote = al - bnp;
        printf("Bangladesh Awami League won by %d votes to Bangladesh Nationalist Party\n", wonByVote);
        wonByVote = al - jp;
        printf("Bangladesh Awami League won by %d votes to Jatiya Party\n", wonByVote);
    }
    else if(bnp > jp) {
        printf("\n***Bangladesh Nationalist Party Won The Election***\n\n");
        printf("Total vote of Bangladesh Nationalist Party: %d\n", bnp);
        wonByVote = bnp - al;
        printf("Bangladesh Nationalist Party won by %d votes to Bangladesh Awami League\n", wonByVote);
        wonByVote = bnp - jp;
        printf("Bangladesh Nationalist Party won by %d votes to Jatiya Party\n", wonByVote);
    }
    else if(al == bnp && bnp == jp) {
        printf("\n                                        ***No One Won The Election***\n\n");
        printf("             Bangladesh Awami League  ---  Bangladesh Nationalist Party  ---  Jatiya Party\n");
        printf("Total Vote:           %d                             %d                            %d\n", al, bnp, jp);
    }
    else {
        printf("\n***Jatiya Party Won The Election***\n\n");
        printf("Total vote of Jatiya Party: %d\n", jp);
        wonByVote = jp - al;
        printf("Jatiya Party won by %d votes to Bangladesh Awami League\n", wonByVote);
        wonByVote = jp - bnp;
        printf("Jatiya Party won by %d votes to Bangladesh Nationalist Party\n", wonByVote);
    }

}

void calculateVote(int vote) {
    switch (vote) {
        case 1: al += 1;
                break;
        case 2: bnp += 1;
                break;
        case 3: jp += 1;
                break;
    }
}
void main() {
    int choose;

    printf("\n********************* Welcome to The Mini Voting System Project *********************\n");
    printf("                                                                                    \n");
    printf("                                    Developed by                                    \n");
    printf("            Nabil Hasan Mahin, Ahmed Razimon Haque Rizvi & Md. Ferdaus Alam           \n");
    printf("                                                                                    \n\n");
    printf("                                 ---MP Election---                                     \n\n");
    printf("*************************************************************************************\n");
    printf("                                                                                     \n");
    printf("|       1. Bangladesh Awami League      |      2. Bangladesh Nationalist Party      |\n");
    printf("                                                                                   \n");
    printf("                           |      3. Jatiya Party      |                               \n");
    printf("                                                                                     \n");
    printf("*************************************************************************************\n\n");

do {
    printf("Press 1 to vote for Bangladesh Awami League\n");
    printf("Press 2 to vote for Bangladesh Nationalist Party\n");
    printf("Press 3 to vote for Jatiya Party \n");
    printf("Press 4 to show election result\n");
    printf("Please choose: ");
    scanf("%d",&choose);
    if (choose == 4) {
        electionResult();
    }
    else {
        calculateVote(choose);
    }
    printf("\n");
} 
while (choose != 4);
    
}