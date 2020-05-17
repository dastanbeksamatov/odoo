/* Written in SQLite */
CREATE TABLE products(
	productID INteger PRIMARY KEY,
	productName text NOT NULL,
  price integer NOT NULL,
  creationDate DATetime NOT NULL,
  categoryID INTEGER REFERENCES Categories(categoryid)
);

CREATE TABLE productCategories(
  primary_key INTEGER,
  productID INTEGER NOT NULL,
  categoryID INTEGER NOT NULL
);
CREATE TABLE Categories(
  categoryID INTEGER PRIMARY KEY,
  name text Not NUll,
  flag TEXT not NULL
);

SELECT DISTINCT
  p.productName,
  p.price,
  p.creationDate
FROM productCategories pc
JOIN products p ON pc.productID = p.productID
WHERE pc.categoryID IN
(SELECT categoryID FROM categories 
WHERE flag = "public"
)
HAVING COUNT(*) > 5