/*
 * telemetry.h
 *
 *  Created on: 17 mar 2026
 *      Author: Mariio
 */

#ifndef INC_TELEMETRY_H_
#define INC_TELEMETRY_H_

typedef struct TelemetryPacket{
	// HEADER
	uint16_t sync = 0xB1E5;
	uint32_t timestamp;
	uint32_t count;

	// RF PERFORMANCE
	int16_t rssi;
	uint16_t tx_success;
	uint16_t tx_fail;

	// TELEMETRY
	int16_t halow_curr;
	int16_t bus_vol;
	int16_t int_temp;
	int16_t ext_temp;

	// FOOTER
	uint8_t error_flags;
	uint16_t checksum;
} __attribute__((packed)) TelemetryPacket;

void printTelemetry();



#endif /* INC_TELEMETRY_H_ */
