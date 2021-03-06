# commKoyo.py
# ------------
# Gestion de la communication avec Koyo, via libkoyo
# ------------
# 
# A faire :
# - Ajouter la fonction d'ecriture des sorties
#
# ------------

# Importation de la librarie libkoyo
import sys
sys.path.insert(0, '/home/ProjetCabane/lib/Koyo')

# Fonction de lecture des sorties
def ReadOut():

	import Koyo as plc
	myKoyo = plc.Koyo('192.168.0.110')
	result = myKoyo.ReadOutputs()

	print 'Python : Readout : ' + result[::-1]

	return int(result[::-1],2);

# Fonction de lecture des entrees
def ReadIn():

	import Koyo as plc
	myKoyo = plc.Koyo('192.168.0.110')
	result = myKoyo.ReadInputs()

	print 'Python : ReadIn : ' + result[::-1]

	return int(result[::-1],2);

# Fonction d'ecriture des sorties
def WriteOutput(a,b):
	print 'Python : WriteOutput : ', a, b
	import Koyo as plc
	myKoyo = plc.Koyo('192.168.0.110')
	myKoyo.WriteOutput(a, b)
    #return result;
