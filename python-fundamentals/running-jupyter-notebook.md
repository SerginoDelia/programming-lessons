# Running Jupyter Notebook

```sh
# in project directory
jupyter notebook .
```


This is a PostgreSQL database.

The database must be initialized with the schema (database and tables) and the data (used by the application).

The file words.sql contains all the SQL commands necessary to create the schema and load the data.

Additional information:

we strongly suggest using the official PostgreSQL image that can be found on the Docker Hub (it's called postgres)
if we check the page of that official image on the Docker Hub, we will find a lot of documentation; the section "Initialization scripts" is particularly useful to understand how to load words.sql
it is advised to set up password authentication for the database; but in this case, to make our lives easier, we will simply authorize all connections (by setting environment variable POSTGRES_HOST_AUTH_METHOD=trust)
