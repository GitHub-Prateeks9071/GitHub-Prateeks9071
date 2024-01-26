# DHT11 - bleno 

A Node.js module for implementing BLE (Bluetooth Low Energy) peripherals.
Using Raspberry Pi 3.0 for reading Temperature and Humidity values via a DHT11 Sensor. We use BLEScanner to make a request in order to read either Temperature or Humidity values.

# Getting Started

	Connect to Raspberry Pi.
	Connect the DHT11 Sensor to the GPIO pin number 4 for sensor signal

# Prerequisites

  Kernel version 3.6 or above
    libbluetooth-dev
    bluetoothd disabled, if BlueZ 5.14 or later is installed. 
Use sudo hciconfig hci0 up to power Bluetooth adapter up after stopping or disabling bluetoothd.
        System V:
            sudo service bluetooth stop (once)
            sudo update-rc.d bluetooth remove (persist on reboot)
        systemd
            sudo systemctl stop bluetooth (once)
            sudo systemctl disable bluetooth (persist on reboot)

If you're using noble and bleno at the same time, connected BLE devices may not be able to retrieve a list of services from the BLE adaptor. Check out noble's documentation on bleno compatibility
	Ubuntu/Debian/Raspbian

	sudo apt-get install bluetooth bluez libbluetooth-dev libudev-dev

	Make sure node is on your path, if it's not, some options:

    symlink nodejs to node: sudo ln -s /usr/bin/nodejs /usr/bin/node
    install Node.js using the NodeSource package
sudo yum install bluez bluez-libs bluez-libs-devel

	*Fedora / Other-RPM based
# Installing
npm install bleno

npm install node-dht-sensor
# Usage 

var bleno = require('bleno');
var sensorLib = require('node-dht-sensor');

# Actions

** Declare Global variables to store the temperature and humidity readings. Also take a flag variable.

var tempOut = 0.0; 
var humOut = 0.0;
var flag = 0;

** Make two functions in order to read the temperature and humidty from the DHT Sensor.

// Reads the Temperature from the DHT Sensor
var readTemp = function() {

var sensorLib = require('node-dht-sensor');
var sensorType = 11; // 11 for DHT11, 22 for DHT22 and AM2302
var sensorPin  = 4;  // The GPIO pin number for sensor signal
if (!sensorLib.initialize(sensorType, sensorPin)) {
    console.warn('Failed to initialize sensor');
    process.exit(1);
}
// Automatically update sensor value every 2 seconds
setInterval(function() {
    var readout = sensorLib.read();
    console.log('Temperature:', readout.temperature.toFixed(1) + 'C');
    tempOut = readout.temperature.toFixed(1);

}, 2000);
};

// Reads the Humidity from the DHT Sensor
var readHum = function() {

var sensorLib = require('node-dht-sensor');
var sensorType = 11; // 11 for DHT11, 22 for DHT22 and AM2302
var sensorPin  = 4;  // The GPIO pin number for sensor signal
if (!sensorLib.initialize(sensorType, sensorPin)) {
    console.warn('Failed to initialize sensor');
    process.exit(1);
}
	// Automatically update sensor value every 2 seconds
	setInterval(function() {
    var readout = sensorLib.read();
    console.log('Humidity:   ', readout.humidity.toFixed(1)    + '%');
    humOut = readout.humidity.toFixed(1);
}, 2000);
};



** Advertising

Start advertising
NOTE: bleno.state must be poweredOn before advertising is started. bleno.on('stateChange', callback(state)); can be used register for state change events.

var name = 'name';
var serviceUuids = ['fffffffffffffffffffffffffffffff0']

bleno.startAdvertising(name, serviceUuids[, callback(error)]);
Note:: there are limits on the name and service UUID's name 
maximum 26 bytes 
service UUID's 
1 128-bit service UUID 
1 128-bit service UUID + 2 16-bit service UUID's 
7 16-bit service UUID 


** Primary Service
var PrimaryService = bleno.PrimaryService;

var primaryService = new PrimaryService({
    uuid: 'fffffffffffffffffffffffffffffff0', // or 'fff0' for 16-bit
    characteristics: [
        // see Characteristic for data type
    ]
});

** Read requests

Can specify read request handler via constructor options or by extending Characteristic and overriding onReadRequest.

// Check flag value in order to set the Buffer to tempOut or humOut for reading the value in the BLEScanner App.

DynamicReadOnlyCharacteristic.prototype.onReadRequest = function(offset, callback) {
  var result = this.RESULT_SUCCESS;
 if(flag == 1){
   var data = new Buffer(tempOut);
 }
 else if(flag == 2){
   var data = new Buffer(humOut);
 }
  if (offset > data.length) {
    result = this.RESULT_INVALID_OFFSET;
    data = null;
  } else {
    data = data.slice(offset);
  }

  callback(result, data);
};


// 

LongDynamicReadOnlyCharacteristic.prototype.onReadRequest = function(offset, callback) {
  var result = this.RESULT_SUCCESS;
  if(flag == 1){
	var data = new Buffer(tempOut);
  }
  else if(flag == 2){
 	var data = new Buffer(humOut);
  }
  
/* ANOTHER WAY OF DOING IT !!
  // Set Buffer size as 1
  var data = new Buffer(1);
  for (var i = 0; i < data.length; i++) {
     if(flag == 1){
	data[i] = tempOut;
     }
     else if(flag == 2){
	data[i] = humOut;
     }
  }*/

  if (offset > data.length) {
    result = this.RESULT_INVALID_OFFSET;
    data = null;
  } else {
     data = data.slice(offset);
   }
  callback(result,data);
};


** Write requests
Can specify write request handler via constructor options or by extending Characteristic and overriding onWriteRequest.

// Specify the write request as either "temp" or "humid".
// For temperature set the flag value to 1 and for Humidity set the flag value to 2.

WriteOnlyCharacteristic.prototype.onWriteRequest = function(data, offset, withoutResponse, callback) {
  console.log('WriteOnlyCharacteristic write request: ' + data.toString('hex') + ' ' + offset + ' ' + withoutResponse);
  
  if(data.toString() == "temp"){
  	flag = 1;
        readTemp();
  }
  else if(data.toString() == "humid"){
  	flag = 2;
        readHum();
  }
  
  callback(this.RESULT_SUCCESS);
};


** Accept
bleno.on('accept', callback(clientAddress)); 

** Disconnect
bleno.on('disconnect', callback(clientAddress)); 

#Built With

    Rasperry Pi - Hardware
    Sensor 		- DHT11 Temperature & Humidity Sensor
    node.js 	- Language Used
    BLEScanner 	- Android App used for Testing

#Authors

 PRN170240126011 - Rushali Parate
 PRN170240126014 - Shipra Thakur
 PRN170240126020 - Phani Vedula

#Acknowledgments

    Sandeep Mistry - https://github.com/sandeepmistry/bleno
    Tarun Bharani

