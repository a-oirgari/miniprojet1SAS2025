#include<stdio.h>


float calculerMoyenne(float notes[3]);

int main (){
    int nb_students;
    float students[30][3];
    printf("Entrer le nombre d'étudiants: ");
    scanf("%d",&nb_students);
    while (nb_students <= 0 || nb_students > 30){
        printf("Error! Entrer un nombre entre 1 et 30\n");
        printf("Entrer le nombre d'étudiants: ");
        scanf("%d",&nb_students);
    }

    for (int i = 0; i < nb_students; i++){
        for(int j = 0; j < 3; j++){
            printf("Veuillez entrer la note du [%d]étudiant pour la [%d] matière: ", i+1, j+1);
            scanf("%f",&students[i][j]);
            while(students[i][j] < 0 || students[i][j] > 20){
                printf("Error! Entrer la note entre 0 et 20\n");
                printf("Veuillez entrer la note du %d étudiant pour la %d matière: ", i+1, j+1);
                scanf("%f", &students[i][j]);
            }
        }
        printf("La moyenne d'étudiant %d dans les trois matières est: %.2f\n", i+1, calculerMoyenne(students[i]));
    }
    
    return 0;
}

float calculerMoyenne(float notes[3]){
    int sum = 0;
    for (int i = 0; i < 3; i++){
            sum = sum + notes[i];
    }
    
    return (float)sum/3;
}

