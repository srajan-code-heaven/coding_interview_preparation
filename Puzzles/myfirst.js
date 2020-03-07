// grab the packages we need
var express = require('express');
var app = express();
var port = process.env.PORT || 8084;

// start the server
app.listen(port);
console.log('Server started! At http://localhost:' + port);

// routes will go here
app.use(function (req, res, next) {
    res.header("Access-Control-Allow-Origin", "*");
    res.header("Access-Control-Allow-Headers", "Origin, X-Requested-With, Content-Type, Accept");
    next();
});

var exec = require('node-ssh-exec');

var config = {
        host: 'dbslp0565',
        username: 'sgupt275',
        password: 'MANju@2552'
    }

app.get('/validate', function (req, res) {
  var command = req.param('cmd');
  console.log("here");
  console.log("command");
exec(config, command, function (error, response) {
    if (error) {
        console.log(error);
    }
    else {
    console.log(response);
    res.send(response);
  }
});
    });
