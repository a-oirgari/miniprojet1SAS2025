#include<stdio.h>

float calculerMoyenne(float notes[], int n);
float trouverMax(float notes[], int n);
float trouverMin(float notes[], int n);
int compterReussites(float notes[], int n);

int main (){
    int nb_students;
    float moyenne, max, min, students[30];
    printf("Entrer le nombre d'étudiants: ");
    scanf("%d",&nb_students);
    while (nb_students <= 0 || nb_students > 30){
        printf("Error! Entrer un nombre entre 1 et 30\n");
        printf("Entrer le nombre d'étudiants: ");
        scanf("%d",&nb_students);
    }
    
    for (int i = 0; i < nb_students; i++){
        printf("Veuillez entrer la note du [%d]étudiant : ", i+1);
        scanf("%f",&students[i]);
        while(students[i] < 0 || students[i] > 20){
            printf("Error! Entrer la note entre 0 et 20\n");
            printf("Veuillez entrer la note du %d étudiant : ", i+1);
            scanf("%f", &students[i]);
        }
    }
    moyenne = calculerMoyenne(students,nb_students);
    printf("La moyenne du classe est: %.2f\n", moyenne);
    max = trouverMax(students, nb_students);
    printf("Le maximum est: %.2f\n", max);
    min = trouverMin(students, nb_students);
    printf("Le minimum est: %.2f\n", min);
    printf("Le total des réussites est: %d\n", compterReussites(students, nb_students));
    return 0;
}


float calculerMoyenne(float notes[], int n){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum + notes[i];
    }
    return (float)sum/n;
}

float trouverMax(float notes[], int n){
    int max = notes[0];
    for (int i = 0; i < n; i++){
        if(notes[i] > max){
            max = notes[i];
        }
    }
    return max;
}

float trouverMin(float notes[], int n){
    int min = notes[0];
    for (int i = 0; i < n; i++){
        if(notes[i] < min){
            min = notes[i];
        }
    }
    return min;
}

int compterReussites(float notes[], int n){
    int temp = 0;
    for (int i = 0; i < n; i++){
        if (notes[i] >= 10){
            temp++;
        }
    }
    return temp;
}