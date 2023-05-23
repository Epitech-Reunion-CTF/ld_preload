# LD_PRELOAD

Ce chellenge consiste à analyser et comprendre le fonctionnement interne d'un fichier binaire, souvent un exécutable, afin d'obtenir des informations sur son fonctionnement, son comportement ou ses vulnérabilités.

### Étape 1

``strings ./bin``
``Comprendre qu'il n'y a rien dans strings car le binaire a été obfusqué.``

### Étape 2

``Comprendre que le flag est créé puis détruit en analysant les fonctions utilisées.``
``Modifier une des fonctions pour qui manipule des pointeurs de char pour trouver le flag.``

## Auteurs
* **SizzleUnrlsd** _alias_ [@SizzleUnrlsd](https://github.com/SizzleUnrlsd)
