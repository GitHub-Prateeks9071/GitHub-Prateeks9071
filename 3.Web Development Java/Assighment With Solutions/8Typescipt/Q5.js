var Product = /** @class */ (function () {
    function Product(str) {
        this.str = str;
    }
    Product.prototype.printAllProducts = function () {
        console.log(str);
    };
    return Product;
}());
var str = [
    {
        name: "Burger",
        id: 11,
        price: 120
    },
    {
        name: "Pizza",
        id: 22,
        price: 150
    },
    {
        name: "Sandwich",
        id: 33,
        price: 70
    }
];
var obj = new Product(str);
obj.printAllProducts();