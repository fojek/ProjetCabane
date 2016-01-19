### ProjetCabane v0.2

Programme de contrôle de l'automatisation de l'érablière.

Version 0.2 :
 - Correction de l'ordre des bits
 - Standardisation des logs
 - meilleure gestion du timeout de koyo
 
#### Description

##### Software :
 - Build avec QT Creator
 - Application principale en c++
 - Interface avec QT Designer
 - Module de communication avec Koyo : https://github.com/SimplyAutomationized/PythonKoyo/blob/master/Koyo.py

##### Hardware :
 - Raspberry Pi 2B
 - Koyo DL06
 - PCB Arduino (Cabanuino)
 - Boitiers SR04 (BatBassin)

###### Special thanks to https://github.com/SimplyAutomationized for his koyo lib! 

#### Historique

2016-01-12 | Ajout de la section d'historique! Hier, j'ai enlevé des accents qui étaient commentés et qui causait une erreur (!) dans commKoyo.py. Aujourd'hui j'ai validé que les modules ultrason vont fonctionner avec de l'eau. J'ai révisé la liste des tâches. À présent je vais travailler sur une branche, histoire de garder une version compilable et fonctionnelle. Création de la branche pour les E/S.
