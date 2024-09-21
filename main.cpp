// MF
#include <iostream>
#include <string>
#include <windows.h> // Pour les accents
#include <algorithm> // Pour la fonction find
#include <random> // Pour la génération de nombres aléatoires

using namespace std;

int main()
{
    // Windows

    system("cls"); // On execute dans le terminal la commande "clear" permettant de tout supprimer dans la console pour que ce soit propre.
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    /*
    Pour linux:   
    system('clear');
    */

    // Alphabet
    string alphabet; // On définit la variable alphabet.

    cout << "Bonjour et bienvenue dans le programme de création aléatoire de mot de passe. \n";
    cout << "Veuillez saisir un alphabet svp : \n" << endl;
    cin >> alphabet; // L'alphabet de l'utilisateur est stocké dans la variable alphabet.

    if (alphabet.empty()) // Si l'alphabet est vide, on affiche un message d'erreur.
    {
        cout << "Erreur : Veuillez saisir un alphabet svp." << endl;
        return 1;
    }
    // à modif en fct de la demande
    string caracteresAutorises = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    /*Vérifie si l'alphabet fourni par l'utilisateur contient uniquement des caractères autorisés.
    Elle parcourt chaque caractère de l'alphabet et utilise la méthode find pour vérifier sa présence dans la chaîne caracteresAutorises.
    Si un caractère non autorisé est trouvé, la variable caracteresInvalides est définie sur true et la boucle est interrompue.*/
    bool caracteresInvalides = false;
    for (char c : alphabet)
    {
        if (caracteresAutorises.find(c) == string::npos)
        {
            caracteresInvalides = true;
            break;
        }
    }
    //Structure conditionnelle pour afficher un message d'erreur si des caractères non autorisés sont présents dans l'alphabet.
    if (caracteresInvalides)
    {
        cout << "Erreur : L'alphabet contient des caractères non autorisés." << endl;
        return 1;
    }

    cout << "Votre alphabet est " << alphabet << "\n" << endl;

    // Mot de passe

    int nbCar;
    cout << "Merci de saisir le nombre de caractère de votre mot de passe (entre 1 et 100) : \n";
    cin >> nbCar;

    /* Vérification de la saisie
   Cette boucle while vérifie si la saisie est invalide ou si le nombre est en dehors de la plage autorisée (1 à 100).
   - cin.fail() vérifie si la saisie précédente a échoué (par exemple, si l'utilisateur a saisi une lettre au lieu d'un nombre).
   - nbCar < 1 vérifie si le nombre est inférieur à 1.
   - nbCar > 100 vérifie si le nombre est supérieur à 100.
   Si l'une de ces conditions est vraie, la boucle continue de demander à l'utilisateur de saisir un nombre valide.
   - cin.clear() efface les erreurs de cin pour permettre une nouvelle saisie.
   - cin.ignore(numeric_limits<streamsize>::max(), '\n')
   ignore les caractères restants dans le buffer jusqu'à la fin de la ligne, ce qui permet de nettoyer l'entrée pour la prochaine saisie.*/
    
    while (cin.fail() || nbCar < 1 || nbCar > 100)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore les caractères restants dans le buffer
        cout << "Erreur : Veuillez saisir un nombre valide entre 1 et 100 : \n";
        cin >> nbCar;
    }

    cout << "Votre mot de passe a " << nbCar << " caractères.\n" << endl;

    // Boucle pour générer le mot de passe
    string mdp;
    random_device rd; // Générateur de nombres aléatoires
    mt19937 gen(rd()); // Mersenne Twister pour générer des nombres aléatoires
    uniform_int_distribution<> dis(0, alphabet.size() - 1); // Distribution uniforme

    for (int i = 0; i < nbCar; i++)
    {
        /*La boucle for itère nbCar fois, où nbCar est le nombre de caractères souhaité pour le mot de passe.
        À chaque itération, dis(gen) génère un indice aléatoire dans la plage de l'alphabet.
        alphabet[dis(gen)] sélectionne un caractère aléatoire de l'alphabet en utilisant l'indice généré.
        Ce caractère est ensuite ajouté à la chaîne mdp, qui représente le mot de passe.
        */
        mdp += alphabet[dis(gen)];
    }

    // FIN

    cout << "Votre mot de passe a été généré avec succès. Voici votre mot de passe : " << mdp << endl;

    return 0;
}
