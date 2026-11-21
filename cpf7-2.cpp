#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
     char paragraph[500], additionalSentence[200], updatedParagraph[700];
    char keyword[50], palindromeWord[50], copiedString[700];

    int characters = 0;
    int words = 0;
    int alphabets = 0;
    int digits = 0;
    int specialCharacters = 0;

    cout << "********************************************" << endl;
    cout << "         DOCUMENT TEXT ANALYZER" << endl;
    cout << "********************************************" << endl;

    cout << "\nEnter Paragraph" << endl;
    cout << "\n";
    cin.getline(paragraph, 500);

    for (int i = 0; paragraph[i] != '\0'; i++)
    {
        characters++;

        if (isalpha(paragraph[i]))
        {
            alphabets++;
        }
        else if (isdigit(paragraph[i]))
        {
            digits++;
        }
        else if (paragraph[i] != ' ')
        {
            specialCharacters++;
        }

        if (paragraph[i] != ' ' &&
            (i == 0 || paragraph[i - 1] == ' '))
        {
            words++;
        }
    }

    cout << " --------------------------------------------" << endl;
    cout << "Text Analysis" << endl;
    cout << " --------------------------------------------" << endl;

    cout << "\nCharacters         : " << characters << endl;
    cout << "Words              : " << words << endl;
    cout << "Alphabets          : " << alphabets << endl;
    cout << "Digits             : " << digits << endl;
    cout << "Special Characters : " << specialCharacters << endl;

    cout << " --------------------------------------------" << endl;


    char firstWord[100];
    char lastWord[100];

    int i = 0;
    int j = 0;

    while (paragraph[i] != '\0' && paragraph[i] != ' ')
    {
        firstWord[j] = paragraph[i];
        i++;
        j++;
    }
    firstWord[j] = '\0';

    int length = 0;

    while (paragraph[length] != '\0')
    {
        length++;
    }

    int end = length - 1;

    if (paragraph[end] == '.' || paragraph[end] == ',' ||
        paragraph[end] == '!' || paragraph[end] == '?')
    {
        end--;
    }

    while (end >= 0 && paragraph[end] != ' ')
    {
        end--;
    }

    end++;

    j = 0;

    while (paragraph[end] != '\0' &&
           paragraph[end] != '.' &&
           paragraph[end] != ',' &&
           paragraph[end] != '!' &&
           paragraph[end] != '?')
    {
        lastWord[j] = paragraph[end];
        j++;
        end++;
    }

    lastWord[j] = '\0';

    cout << "\nString Extraction" << endl;
    cout << " --------------------------------------------" << endl;

    cout << "\nFirst Word         : " << firstWord << endl;
    cout << "Last Word          : " << lastWord << endl;
    cout << "First Character    : " << paragraph[0] << endl;
    cout << "Last Character     : " << paragraph[length - 1] << endl;

    cout << " --------------------------------------------" << endl;


    cout << "\nConcatenation" << endl;
    cout << " --------------------------------------------" << endl;

    cout << "\nEnter Additional Sentence" << endl;
    cout << "\n";
    cin.getline(additionalSentence, 200);

    strcpy(updatedParagraph, paragraph);
    strcat(updatedParagraph, "\n");
    strcat(updatedParagraph, additionalSentence);

    cout << "\nUpdated Paragraph" << endl;
    cout << "\n" << updatedParagraph << endl;

    cout << " --------------------------------------------" << endl;

    // Part D - Pattern Matching

    cout << "\nPattern Matching" << endl;
    cout << " --------------------------------------------" << endl;

    cout << "\nEnter Search Word : ";
    cin.getline(keyword, 50);

    char *position = strstr(updatedParagraph, keyword);

    if (position != NULL)
    {
        cout << "\nKeyword Found" << endl;

        cout << "\nFirst Occurrence Position : "
             << position - updatedParagraph << endl;
    }
    else
    {
        cout << "\nKeyword Not Found" << endl;
    }

    cout << " --------------------------------------------" << endl;


    char uppercase[700];
    char lowercase[700];
    char reversed[700];

    strcpy(uppercase, updatedParagraph);
    strcpy(lowercase, updatedParagraph);

    for (i = 0; uppercase[i] != '\0'; i++)
    {
        if (uppercase[i] >= 'a' && uppercase[i] <= 'z')
        {
            uppercase[i] = uppercase[i] - 32;
        }
    }

    for (i = 0; lowercase[i] != '\0'; i++)
    {
        if (lowercase[i] >= 'A' && lowercase[i] <= 'Z')
        {
            lowercase[i] = lowercase[i] + 32;
        }
    }

    int updatedLength = strlen(updatedParagraph);

    for (i = 0; i < updatedLength; i++)
    {
        reversed[i] = updatedParagraph[updatedLength - 1 - i];
    }

    reversed[updatedLength] = '\0';

    cout << "\nString Transformation" << endl;
    cout << " --------------------------------------------" << endl;

    cout << "\nUppercase" << endl;
    cout << "\n" << uppercase << endl;

    cout << " --------------------------------------------" << endl;

    cout << "\nLowercase" << endl;
    cout << "\n" << lowercase << endl;

    cout << " --------------------------------------------" << endl;

    cout << "\nReverse" << endl;
    cout << "\n" << reversed << endl;

    cout << " --------------------------------------------" << endl;


    cout << "\nPalindrome Check" << endl;
    cout << "\nEnter Word : ";
    cin.getline(palindromeWord, 50);

    int palindromeLength = strlen(palindromeWord);
    bool palindrome = true;

    for (i = 0; i < palindromeLength / 2; i++)
    {
        if (palindromeWord[i] !=
            palindromeWord[palindromeLength - 1 - i])
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
    {
        cout << "\nResult : Palindrome" << endl;
    }
    else
    {
        cout << "\nResult : Not Palindrome" << endl;
    }

    cout << " --------------------------------------------" << endl;


    cout << "\nStandard String Functions" << endl;
    cout << " --------------------------------------------" << endl;

    cout << "\nLength               : "
         << strlen(updatedParagraph) << endl;

    strcpy(copiedString, updatedParagraph);
    cout << "\nString Copied Successfully" << endl;

    int comparisonResult = strcmp(updatedParagraph, copiedString);

    if (comparisonResult == 0)
    {
        cout << "\nComparison Result    : Equal" << endl;
    }
    else
    {
        cout << "\nComparison Result    : Not Equal" << endl;
    }

    char concatenateString[700];
    strcpy(concatenateString, paragraph);
    strcat(concatenateString, additionalSentence);

    cout << "\nConcatenation        : Successful" << endl;

    if (strstr(updatedParagraph, keyword) != NULL)
    {
        cout << "\nSubstring Search     : Found" << endl;
    }
    else
    {
        cout << "\nSubstring Search     : Not Found" << endl;
    }


    char upperStandard[700];
    strcpy(upperStandard, updatedParagraph);

    for (i = 0; upperStandard[i] != '\0'; i++)
    {
        upperStandard[i] = toupper(upperStandard[i]);
    }

    cout << "\ntoupper()            : Successful" << endl;

    char lowerStandard[700];
    strcpy(lowerStandard, updatedParagraph);

    for (i = 0; lowerStandard[i] != '\0'; i++)
    {
        lowerStandard[i] = tolower(lowerStandard[i]);
    }

    cout << "\ntolower()            : Successful" << endl;

    cout << " --------------------------------------------" << endl;

    return 0;
}
