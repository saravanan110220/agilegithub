using System;

class GradeCalculator
{
    static void Main()
    {
        Console.WriteLine("Enter number of subjects:");
        int n = int.Parse(Console.ReadLine());

        double total = 0;

        for (int i = 1; i <= n; i++)
        {
            Console.Write($"Enter marks for subject {i}: ");
            double marks = double.Parse(Console.ReadLine());
            total += marks;
        }

        double average = total / n;

        Console.WriteLine($"\nTotal Marks: {total}");
        Console.WriteLine($"Average Marks: {average}");

        string grade;

        if (average >= 90)
            grade = "A+";
        else if (average >= 80)
            grade = "A";
        else if (average >= 70)
            grade = "B";
        else if (average >= 60)
            grade = "C";
        else if (average >= 50)
            grade = "D";
        else
            grade = "F";

        Console.WriteLine($"Grade: {grade}");
    }
}
