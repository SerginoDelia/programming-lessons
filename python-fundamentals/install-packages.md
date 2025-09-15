

```sh
mkdir -p ~/python/python-fundamentals && cd ~/python/python-fundamentals
brew install python@3.9
python3.9 -m venv py39
source py39/bin/activate

# deactivate venv
deactivate
```

Windows

```sh
choco install python39


mkdir python-fundamentals
cd python-fundamentals
python3.9 -m venv py39
source py39/Scripts/activate
pip install requests pandas
pip install jupyterthemes
pip freeze
```

Running Jupyter Notebook

```sh
jupyter notebook .
```