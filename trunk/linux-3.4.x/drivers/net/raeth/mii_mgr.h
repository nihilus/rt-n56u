#ifndef __MII_MGR_H__
#define __MII_MGR_H__

#define MT7530_MDIO_ADDR	(0x1f)

u32 mii_mgr_read(u32 phy_addr, u32 phy_register, u32 *read_data);
u32 mii_mgr_write(u32 phy_addr, u32 phy_register, u32 write_data);

#endif
