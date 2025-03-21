#include<stdio.h>
#include<ctype.h>
#include<string.h>

int get_score(char word[]);

int main()
{
printf("Player 1:");
 char word1[100];
 scanf("%s", word1);

printf("Player 2:");
 char word2[100];
 scanf("%s", word2);

int result1 =  get_score(word1);
int result2 = get_score(word2);

if (result1 > result2) {
  printf("%s wins\n", word1);

} else {
  printf("%s wins\n", word2);
}

}

int get_score(char word[]) {
  int score = 0;
  int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10}; 

  for (int i = 0; word[i] != '\0'; i++) {
    char letter = toupper(word[i]);
    if(letter >= 'A' && letter <= 'Z') {
      score = score + points[letter - 'A'];
    }
  }
  return score;
}