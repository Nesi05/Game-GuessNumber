/*Nesi Mpanzu
Game Number
C# */


static void Main(string[] args)
{
    int valueToFound = new Random().Next(0, 100);
    int numberSet = 0;
    Console.WriteLine("entre a number between 0 and 100 (non include)");
    while (true)
    {
        string entered = Console.ReadLine();
        int valueEntered;
        if (!int.TryParse(entered, out valueEntered))
        {
            Console.WriteLine("the value entered is not correcte, please try again ...");
            continue;
        }
        if (valueEntered < 0 || valueEntered >= 100)
        {
            Console.WriteLine("You must enter a number between 0 et 100 non include ...");
            continue;
        }
        nombreDeCoups++;
        if (valueEntered == valueToFound )
            break;
        if (valueEntered < valueToFound )
            Console.WriteLine("This is smaller...");
        else
            Console.WriteLine("This is bigger ...");
    }
    if (numberSet == 1)
        Console.WriteLine("you hav " + numberSet + " coup");
    else
        Console.WriteLine("Vous avez trouvé en " + numberSet + " coups");
}
