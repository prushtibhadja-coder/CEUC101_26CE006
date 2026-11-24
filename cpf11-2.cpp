#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int main()
{
    cout << "********************************************" << endl;
    cout << "FILE ORGANIZATION & FILE OPERATIONS UTILITY" << endl;
    cout << "********************************************" << endl;

    char text[200];

    // PART A - File Creation and Writing

    FILE *file = fopen("Document.txt", "w");

    if (file == NULL)
    {
        cout << "Unable to Create File." << endl;
        return 0;
    }

    cout << "\nDocument.txt Created Successfully" << endl;

    cout << "--------------------------------------------" << endl;

    cout << "\nEnter File Contents" << endl;

    cout << "Enter blank line to stop writing." << endl;

    while (true)
    {
        cin.getline(text, 200);

        if (strlen(text) == 0)
        {
            break;
        }

        fprintf(file, "%s\n", text);
    }

    fclose(file);

    cout << "--------------------------------------------" << endl;

    cout << "\nData Written Successfully" << endl;

    cout << "--------------------------------------------" << endl;

    // PART B - File Reading

    file = fopen("Document.txt", "r");

    if (file == NULL)
    {
        cout << "Unable to Open File." << endl;
        return 0;
    }

    cout << "\nReading Document.txt" << endl;

    while (fgets(text, 200, file) != NULL)
    {
        cout << text;
    }

    cout << "--------------------------------------------" << endl;

    cout << "\nEnd of File Reached Successfully" << endl;

    fclose(file);

    // PART C - File Copying

    cout << "--------------------------------------------" << endl;

    cout << "\nCreating BackupDocument.txt" << endl;

    FILE *source = fopen("Document.txt", "r");

    FILE *destination = fopen("BackupDocument.txt", "w");

    if (source == NULL || destination == NULL)
    {
        cout << "Unable to Open File." << endl;

        if (source != NULL)
            fclose(source);

        if (destination != NULL)
            fclose(destination);

        return 0;
    }

    char ch;

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    cout << "Contents Copied Successfully" << endl;

    cout << "Backup File Created Successfully" << endl;

    cout << "--------------------------------------------" << endl;

    // PART D - Random File Access

    file = fopen("Document.txt", "r");

    if (file == NULL)
    {
        cout << "Unable to Open File." << endl;
        return 0;
    }

    fseek(file, 0, SEEK_END);

    cout << "\nCurrent File Position : " << ftell(file) << endl;

    cout << "\nMoving File Pointer..." << endl;

    // Move to the beginning of the file
    rewind(file);

    // Skip the first line
    fgets(text, 200, file);

    long position = ftell(file);

    cout << "\nDisplaying Contents after Repositioning" << endl;

    fseek(file, position, SEEK_SET);

    fgets(text, 200, file);

    cout << text;

    // Reset pointer to beginning

    cout << "\nResetting File Pointer" << endl;

    rewind(file);

    while (fgets(text, 200, file) != NULL)
    {
        cout << text;
    }

    fclose(file);

    cout << "--------------------------------------------" << endl;

    cout << "\nProgram Executed Successfully" << endl;

    cout << "--------------------------------------------" << endl;

    return 0;
}
