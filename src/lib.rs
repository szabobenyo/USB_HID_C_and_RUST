#![allow(non_snake_case)]
#![no_std]

extern crate cortex_m_rt;
extern crate panic_halt;

// TO CHANGE LED STATES, SEND: "CODE_LD1" for Green, "CODE_LD2" for Blue, "CODE_LD3" for Red.
// Green_LED BLINKY FREQ: "CODE_SP"

#[no_mangle]
fn decode_task(buffer: &mut [u8; 0x40]) -> u8 {
    let mut speed: u8;

    if buffer[6] == 76 && buffer[7] == 68 && (buffer[8] == 49 || buffer[8] == 50 || buffer[8] == 51)
    // LD1-2-3 aka LED
    {
        match buffer[8] {
            49 => return 1,
            50 => return 2,
            51 => return 3,
            _ => (),
        }
    } else if buffer[6] == 83 && buffer[7] == 80
    // SP aka SPEED
    {
        match buffer[8] {
            49 => speed = 50,
            50 => speed = 100,
            51 => speed = 150,
            52 => speed = 200,
            53 => speed = 250,
            _ => speed = 0,
        }
        match buffer[9] {
            49 => speed += 5,
            50 => speed += 10,
            51 => speed += 15,
            52 => speed += 20,
            53 => speed += 25,
            54 => speed += 30,
            55 => speed += 35,
            56 => speed += 40,
            57 => speed += 45,
            _ => speed += 0,
        }
        return speed;
    }
    return 0;
}

#[no_mangle]
fn is_code(buffer: &mut [u8; 0x40]) -> bool {
    buffer[1] == 67 // C
        && buffer[2] == 79 // O
        && buffer[3] == 68 // D
        && buffer[4] == 69 // E
        && buffer[5] == 95 // _
}

#[no_mangle]
pub extern "C" fn get_task_from_rust(buffer: &mut [u8; 0x40]) -> u8 {
    match is_code(buffer) {
        true => decode_task(buffer),
        false => 0,
    }
}
