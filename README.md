### 📜 get_next_line - École 42

Projet fondamental du cursus 42.  
**get_next_line** consiste à écrire une fonction capable de **lire une ligne depuis un descripteur de fichier**, peu importe sa taille, sans perdre le flux entre deux appels.

---

## 🎯 Objectifs
- Gérer la **lecture de fichiers de manière dynamique**.  
- Manipuler les **buffers** et les **allocations mémoire** avec précision.  
- Implémenter une gestion efficace des **restes de lecture**.  
- Apprendre à travailler sans fuite mémoire.

---

## ⚙️ Fonctionnalités
- Lecture ligne par ligne depuis un fichier ou `stdin`.  
- Compatible avec des buffers de taille variable (`BUFFER_SIZE`).  
- Gestion propre de la mémoire et des EOF.  

---

## 🧱 Compilation
```bash
cc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c main.c
./a.out
