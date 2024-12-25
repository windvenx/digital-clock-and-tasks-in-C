// #include <stdio.h>

// int main() {
//     int arr[] = {1, 3, 4, 5}; 
    // int size = sizeof(arr) / sizeof(arr[0]); 
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


// #include <stdio.h>
// int main()
// {
//     const int size = 5;
//     int arr[5] = { 1,2,3,4,5 };
//     for (int i = 0; i < size; i++)
//     {
//         printf("%3d", arr[size - i-1]);
//     }
//     printf("\n");
//     return 0;
// }




// #include <stdio.h>
// #include <string.h>

// void reverseString(char str[]) {
//     int len = strlen(str); 
//     int start = 0, end = len - 1;

//     while (start < end) {
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;
//         start++;
//         end--;
//     }
// }




// int main() {
//     char str[] = "Hello, World!";
//     printf("Original string: %s\n", str);

//     reverseString(str);

//     printf("Reversed string: %s\n", str);
//     return 0;
// }




// #include <stdlib.h>
// #include <stdio.h>

// // Return a dynamically allocated int array
// // Return array will be freed by the tester

// int *reverse_list(const int *array, size_t length) {
//     if (array == NULL || length == 0) {
//         return NULL; // Проверка на пустой массив
//     }

//     // Выделяем память для результирующего массива
//     int *reversed = (int *)malloc(length * sizeof(int));
//     if (reversed == NULL) {
//         return NULL; // Ошибка выделения памяти
//     }

//     // Заполняем массив в обратном порядке
//     for (size_t i = 0; i < length; i++) {
//         reversed[i] = array[length - i - 1];
//     }

//     return reversed;
// }


// #include <stdio.h>

// int main()
// {
//     int arr[4] = {1,2,3,4};
//     int sum = 0;
//     for(int i = 0;i<4;i++)
//     {
//         sum += arr[i];
//         printf("%d * ",sum);
//     }
//     return 0;
// }



// #include <stddef.h>
// #include <stdio.h> // Добавляем заголовочный файл для printf

// int main(size_t size, const int arr[size]) {
//     int product = 1;

//     // Вывод элементов массива с символом '*'
//     for (size_t i = 0; i < size; i++) // Используем size_t для i
//     {
//         printf("%d", arr[i]); // Печатаем число
//         if (i < size - 1) // Добавляем '*' только между числами
//         {
//             printf(" * ");
//         }
//         product *= arr[i]; // Умножаем на текущее значение
//     }

//     // Печать результата
//     printf(" = %d\n", product);

//     return product; // Возвращаем произведение
// }




// int getAge(const char *inputString)
// {
//     // return correct age (int). Happy coding :)
//     return inputString[0] - '0';
// }



// int nbYear(int p0, double percent, int aug, int p) {
//     int years = 0;
//     while (p0 < p) {
//         p0 += p0 * percent / 100 + aug;  // Рост населения за год
//         years++;  // Увеличиваем количество лет
//     }
//     return years;
// }




// #include <stdio.h>

// int main()
// {
//     char *a = "str";
//     for(int i = 0;i<3;i++)
//     {
//         printf("%s",a[i]);
//     }
//     return 0;
// }



// char *double_char(const char *string, char *doubled) {
//     int size = strlen(string); // Определяем длину строки
//     int j = 0; // Индекс для заполнения результирующей строки

//     for (int i = 0; i < size; i++) {
//         doubled[j++] = string[i]; // Добавляем текущий символ
//         doubled[j++] = string[i]; // Добавляем тот же символ снова
//     }

//     doubled[j] = '\0'; // Завершаем результирующую строку нулевым символом
//     return doubled; // Возвращаем результирующую строку
// }


// int unusual_five()
//     {return 'f'%'a';}


// int unusual_five() {
//   return sizeof "five";
// }




// #include <ctype.h>

// char *makeUpperCase(char *str) {
//     char *original_str = str;  // Сохраняем указатель на начало строки
    
//     while (*str) {
//         *str = toupper((unsigned char)*str);  // Преобразуем символ в верхний регистр
//         str++;
//     }

//     return original_str;  // Возвращаем указатель на начало строки
// }




// unsigned bin_to_decimal(const char *binary)
// {
// 	int decimal = 0;
//     int length = strlen(binary);
    
//     for (int i = 0; i < length; i++) {
//         // Если символ не '0' или '1', возвращаем ошибку
//         if (binary[i] != '0' && binary[i] != '1') {
//             return -1; // Ошибка ввода
//         }

//         // Сдвигаем значение влево на 1 разряд (умножаем на 2) и добавляем текущую цифру
//         decimal = decimal * 2 + (binary[i] - '0');
//     }

//     return decimal;
// }




// #include <stdbool.h>
// #include <stddef.h>

// bool small_enough(int *arr, size_t length, int limit)
// {
//     for (size_t i = 0; i < length; i++) {
//         if (arr[i] > limit) {  // Если хотя бы один элемент больше лимита
//             return false;
//         }
//     }
//     return true;  // Все элементы меньше или равны лимиту
// }



// #include <stdio.h>

// // assign function results to provided array
// void between(int a, int b, int *integers) {
//     // Заполнение массива значениями
//     for (int i = a; i <= b; i++) {
//         integers[i - a] = i;  // Заполняем массив integers значениями от a до b
//     }
// }



// #include <stdio.h>
// #include <string.h>
// #include <math.h>

// // Функция для преобразования шестнадцатеричной строки в десятичное число
// int hex_to_decimal(const char *hex) {
//     int decimal = 0;
//     int len = strlen(hex);
    
//     for (int i = 0; i < len; i++) {
//         char c = hex[i];
//         int value;

//         // Проверяем, является ли символ цифрой
//         if (c >= '0' && c <= '9') {
//             value = c - '0';  // Преобразуем символ цифры в соответствующее число
//         }
//         // Проверяем, является ли символ буквой A-F (шестнадцатеричные буквы)
//         else if (c >= 'A' && c <= 'F') {
//             value = c - 'A' + 10;  // Преобразуем букву в число (A=10, B=11, ..., F=15)
//         }
//         // Проверяем на маленькие буквы a-f
//         else if (c >= 'a' && c <= 'f') {
//             value = c - 'a' + 10;  // Преобразуем букву в число (a=10, b=11, ..., f=15)
//         } else {
//             printf("Ошибка: неверный символ в шестнадцатеричной строке\n");
//             return -1; // Возвращаем ошибку
//         }

//         // Добавляем к десятичному числу, с учетом позиции
//         decimal += value * pow(16, len - i - 1);
//     }

//     return decimal;
// }

// int main() {
//     const char *hex = "1A3"; // Пример шестнадцатеричной строки
//     int decimal = hex_to_decimal(hex);
    
//     if (decimal != -1) {
//         printf("Шестнадцатеричное число %s в десятичной системе: %d\n", hex, decimal);
//     }
    
//     return 0;
// }




// #include <stdbool.h>

// bool xor(bool a, bool b) {
//     return a != b;
// }




// #include <stdio.h>

// char* position(char alphabet)
// {
//   static char ret[22+3] = "";
  
//   if(alphabet >= 'A' && alphabet <= 'Z'){ /* if alphabet is mayus char */
//     sprintf(ret, "Position of alphabet: %d", alphabet - 'A' + 1);
//   } else if(alphabet >= 'a' && alphabet <= 'z'){ 
//     sprintf(ret, "Position of alphabet: %d", alphabet - 'a' + 1);
//   }
  
//   return ret;
// }




// #include <stdio.h>
// #include <stdlib.h>
// #include <ctype.h>
// #include <string.h>

// // Функция преобразует имя: первая буква - заглавная, остальные - строчные
// void formatName(const char *input, char *output) {
//     size_t len = strlen(input);
//     if (len > 0) {
//         output[0] = toupper(input[0]); // Первая буква заглавная
//         for (size_t i = 1; i < len; ++i) {
//             output[i] = tolower(input[i]); // Остальные строчные
//         }
//         output[len] = '\0';
//     } else {
//         strcpy(output, "World"); // Если имя пустое, используем "World"
//     }
// }

// // Функция возвращает приветствие в динамически выделенной строке
// char *hello(const char *name) {
//     char formattedName[100]; // Временный буфер для форматированного имени
//     formatName(name, formattedName);

//     // Вычисляем длину строки для динамического выделения памяти
//     size_t messageLength = strlen("Hello, !") + strlen(formattedName) + 1;
//     char *result = malloc(messageLength);

//     if (result) {
//         snprintf(result, messageLength, "Hello, %s!", formattedName);
//     }
//     return result;
// }




// #include <stdlib.h> // Для функции abs()

// int find_difference(const int a[3], const int b[3]) {
//     int r = 1;
//     int r2 = 1;

//     for (int i = 0; i < 3; i++) {
//         r *= a[i];
//         r2 *= b[i];
//     }

//     int r3 = r - r2;

//     return abs(r3); // Возвращаем абсолютное значение разности
// }








// #include <stdio.h>
// #include <unistd.h> 
// #include <stdlib.h> 

// int main() {
//     int h, m, s; 
//     h = m = s = 0;

//     while (1) {
//         system("clear");

//         printf("%02d : %02d : %02d\n", h, m, s);
//         fflush(stdout);

//         s++;

//         if (s == 60) {
//             m++;
//             s = 0;
//         }
//         if (m == 60) {
//             h++;
//             m = 0;
//         }
//         if (h == 24) {
//             h = 0;
//         }

//         sleep(1);
//     }

//     return 0;
// }