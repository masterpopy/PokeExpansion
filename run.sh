make
python scripts/expansion.py
python scripts/insert.py
cp test.gba POKEMON-EMERALD-G9-PROJECT/BPEE0.gba
cp offsets.ini POKEMON-EMERALD-G9-PROJECT/depends.ld
cd POKEMON-EMERALD-G9-PROJECT
python m.py
