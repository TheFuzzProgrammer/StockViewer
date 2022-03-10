#pragma once

/*

CREATE TABLE `svlocal`.`products` ( `code` VARCHAR(20) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL 
, `name` VARCHAR(20) CHARACTER SET utf8 COLLATE utf8_general_ci NOT NULL , `expires` BOOLEAN NOT NULL 
, `expire_date` DATE NULL DEFAULT NULL , `content` DECIMAL(20) NOT NULL , `quantity` INT(20) NOT NULL 
, `price` FLOAT(20) NOT NULL , `liquid` BOOLEAN NOT NULL ) ENGINE = InnoDB CHARSET=utf8 COLLATE utf8_general_ci;



INSERT INTO svlocal.products (code, name, expires, expire_date, content, quantity, price, liquid) 
VALUES ('0000001', 'TestProduct', '0', '2022-03-31', '5.0', '178', '1575.5', '0');


delete from svlocal.products WHERE code = '0000002';

*/