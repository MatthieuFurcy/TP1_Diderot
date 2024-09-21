# Générateur de Mots de Passe Aléatoires

Bienvenue dans le programme de génération de mots de passe aléatoires. Ce projet a été réalisé dans le cadre du TP1 de mon lycée. Il permet de générer des mots de passe sécurisés en utilisant un alphabet fourni par l'utilisateur.

## Table des Matières

- [Introduction](#introduction)
- [Fonctionnalités](#fonctionnalités)
- [Prérequis](#prérequis)
- [Installation](#installation)
- [Utilisation](#utilisation)
- [Exemple de Fonctionnement](#exemple-de-fonctionnement)
- [Contribuer](#contribuer)
- [Licence](#licence)

## Introduction

Ce programme permet de générer des mots de passe aléatoires en utilisant un alphabet personnalisé. L'utilisateur peut spécifier l'alphabet et la longueur du mot de passe souhaité. Le programme vérifie également que l'alphabet ne contient que des caractères autorisés et que la longueur du mot de passe est comprise entre 1 et 100 caractères.

## Fonctionnalités

- Saisie d'un alphabet personnalisé.
- Vérification des caractères autorisés dans l'alphabet.
- Saisie de la longueur du mot de passe (entre 1 et 100 caractères).
- Génération d'un mot de passe aléatoire basé sur l'alphabet fourni.
- Affichage du mot de passe généré.

## Prérequis

Avant de commencer, assurez-vous d'avoir les éléments suivants :

- Un compilateur C++ (comme g++, clang++, ou MSVC).
- Un environnement de développement (comme Visual Studio Code, CLion, ou tout autre IDE C++).

## Installation

1. Clonez le dépôt sur votre machine locale
2. Accédez au répertoire du projet
3. Compilez le programme
4. Exécutez le programme


   ```sh
   git clone https://github.com/votre-utilisateur/votre-repo.git
   cd votre-repo
   g++ main.cpp -o main
   ./generateur_mdp```

## Utilisation

Suivez les instructions à l'écran pour saisir l'alphabet et la longueur du mot de passe.

## Exemple de Fonctionnement

Voici un exemple de fonctionnement du programme :

```sh
Bonjour et bienvenue dans le programme de création aléatoire de mot de passe.
Veuillez saisir un alphabet svp :
abcdefghijklmnopqrstuvwxyz

Merci de saisir le nombre de caractère de votre mot de passe (entre 1 et 100) :
12

Votre mot de passe a 12 caractères.

Votre mot de passe a été généré avec succès. Voici votre mot de passe : kdjf93kdjfk
```

## Contribuer

Les contributions sont les bienvenues ! Si vous souhaitez contribuer à ce projet, veuillez suivre les étapes suivantes :

1. Forkez le dépôt.
2. Créez une branche pour votre fonctionnalité (git checkout -b feature/AmazingFeature).
3. Commitez vos modifications (git commit -m 'Add some AmazingFeature').
4. Poussez votre branche (git push origin feature/AmazingFeature).
5. Ouvrez une Pull Request.

## Licence
Ce projet est disponible à qui bon le semble.
