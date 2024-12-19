// #include <stdio.h>

// int main() {
//     int arr[] = {1, 3, 4, 5}; 
//     int size = sizeof(arr) / sizeof(arr[0]); 
//     int is_consecutive = 1; 

//     for (int i = 1; i < size; i++) {
//         int diff = arr[i] - arr[i - 1]; 
//         if (diff != 1 && diff != -1) { 
//             is_consecutive = 0; 
//             break;
//         }
//     }

//     if (is_consecutive) {
//         printf("false\n"); 
//     } else {
//         printf("true\n"); 
//     }

//     return 0;
// }




// #include <stdio.h>
// #include <stdbool.h>

// bool check_for_factor(int base, int factor);

// int main() {
//     int base = 9;
//     int factor = 2;

//     if (check_for_factor(base, factor)) {
//         printf("true\n");
//     } else {
//         printf("false\n");
//     }

//     return 0;
// }

// bool check_for_factor(int base, int factor) {
//     if (factor == 0) {
//         return false;
//     }

//     return base % factor == 0; 
// }





// #include <stdbool.h>

// bool check_for_factor(int base, int factor) {
//     return base % factor == 0;
// }






// #include <stdio.h>
// #include <string.h>

// void findNeedle(char *arr[], int length) {
//     for (int i = 0; i < length; i++) {
//         if (strcmp(arr[i], "needle") == 0) { 
//             printf("found the needle at position %d\n", i);
//             return;
//         }
//     }
//     printf("needle not found\n"); 
// }

// int main() {
//     // Пример данных
//     char *array[] = {"hay", "junk", "hay", "hay", "moreJunk",  "randomJunk","needle"};
//     int length = sizeof(array) / sizeof(array[0]);

//     // Вызываем функцию поиска
//     findNeedle(array, length);

//     return 0;
// }






// #include <stdio.h>

// char *find_needle(const char **haystack, size_t count)
// {
//   for(int i=0; i<count;++i)
//   {
//     if(!strcmp(haystack[i], "needle")) // strcmp will return 0 if true, so we need '!' to it to work
//     {
//       char* buff;
//       asprintf(&buff, "found the needle at position %d", i);
//       return buff;
//     }
//   }


// char *get_initials (const char *full_name, char initials[4])
// {
//   *initials = '\0'; 
//   return 0;
// }




// #include <stdio.h>

// int main(void)
// {
//     int num = 5;
//     int arr[5] = {1, 2, 3, 4, 5};

//     printf("["); 
//     for (int i = 0; i < num; i++) {
//         printf("%d", arr[i]); 
//         if (i < num - 1) {
//             printf(", "); 
//         }
//     }
//     printf("]"); 

//     return 0;
// }

// #include <stdlib.h>

// unsigned short *reverse_seq(unsigned short num)
// {
//   if (num == 0) {
//     return NULL;
//   }
  
//   unsigned short *result = malloc(num * sizeof(unsigned short));
//   if (result == NULL) {
//     return NULL;
//   }
  
//   for (unsigned short i = 0; i < num; i++) {
//     result[i] = num - i;
//   }
  
//   return result;
// }




// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// // Функция для подсчета слов
// size_t count_words(const char *words) {
//     size_t count = 0;
//     int in_word = 0;

//     while (*words) {
//         if (isspace(*words)) {
//             in_word = 0; // Вне слова
//         } else if (!in_word) {
//             in_word = 1; // Начало нового слова
//             count++;
//         }
//         words++;
//     }

//     return count;
// }

// // Функция для разбиения строки на слова
// void words_to_array(const char *words, char *words_array[]) {
//     size_t index = 0;
//     const char *start = NULL;

//     while (*words) {
//         if (!isspace(*words) && start == NULL) {
//             // Начало слова
//             start = words;
//         } else if (isspace(*words) && start != NULL) {
//             // Конец слова
//             size_t len = words - start;
//             words_array[index] = (char *)calloc(len + 1, sizeof(char));
//             strncpy(words_array[index], start, len);
//             words_array[index][len] = '\0'; // Завершающий символ
//             start = NULL;
//             index++;
//         }
//         words++;
//     }

//     // Если строка заканчивается на слово, обработать его
//     if (start != NULL) {
//         size_t len = words - start;
//         words_array[index] = (char *)calloc(len + 1, sizeof(char));
//         strncpy(words_array[index], start, len);
//         words_array[index][len] = '\0';
//     }
// }

// int main() {
//     const char *sentence = "I love arrays they are my favorite";
    
//     // Подсчитываем количество слов
//     size_t word_count = count_words(sentence);
//     printf("Word count: %zu\n", word_count);

//     // Создаем массив указателей
//     char **words_array = (char **)malloc(word_count * sizeof(char *));
    
//     // Разбиваем строку на слова
//     words_to_array(sentence, words_array);

//     // Печатаем результат
//     for (size_t i = 0; i < word_count; i++) {
//         printf("[%s]\n", words_array[i]);
//         free(words_array[i]); // Освобождаем память для каждого слова
//     }
//     free(words_array); // Освобождаем массив указателей

//     return 0;
// }



// int combat(int health, int damage) {

//     //  <----  hajime!
//   int new_health = health - damage;
//       if (new_health < 0) {
//           new_health = 0; // Здоровье не может быть меньше 0
//       }
//       return new_health;
// }




// #include <stdbool.h>
// #include <stdlib.h>
// #include <string.h>

// bool feast(const char* beast, const char* dish) {
//     char beastStartsWith = *beast;
//     char dishStartsWith = *dish;
//     char beastEndsWith = *(beast + strlen(beast) - 1);
//     char dishEndsWith = *(dish + strlen(dish) - 1);
//     if ((beastStartsWith == dishStartsWith) && (beastEndsWith == dishEndsWith))
//           return true;
          
//      return false;
// }





#include <stdio.h>
#include <unistd.h> 
#include <stdlib.h> 

int main() {
    int h, m, s; 
    h = m = s = 0;

    while (1) {
        system("clear");

        printf("%02d : %02d : %02d\n", h, m, s);
        fflush(stdout);

        s++;

        if (s == 60) {
            m++;
            s = 0;
        }
        if (m == 60) {
            h++;
            m = 0;
        }
        if (h == 24) {
            h = 0;
        }

        sleep(1);
    }

    return 0;
}
