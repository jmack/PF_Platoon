export type ItemDefinition = {
  name: string;
  className: string;
  arsenalType: (typeof ArsenalItemTypes)[keyof typeof ArsenalItemTypes];
  tictacType: (typeof TicTacItemTypes)[keyof typeof TicTacItemTypes];
};

export const ArsenalItemTypes = {
  PRIMARY: 'PRIMARY',
  SECONDARY: 'SECONDARY',
  LAUNCHER: 'LAUNCHER',
  SIGHT: 'SIGHT',
  RAIL: 'RAIL',
  MUZZLE: 'MUZZLE',
  BIPOD: 'BIPOD',
  MAGAZINE: 'MAGAZINE',
  GRENADE: 'GRENADE',
  EXPLOSIVE: 'EXPLOSIVE',
  TOOL: 'TOOL',
  MISC: 'MISC',
  HELMET: 'HELMET',
  UNIFORM: 'UNIFORM',
  VEST: 'VEST',
  BACKPACK: 'BACKPACK',
  FACEWEAR: 'FACEWEAR',
  NVG: 'NVG',
  BINO: 'BINO',
  MAP: 'MAP',
  TERMINAL: 'TERMINAL',
  COMMS: 'COMMS',
  NAVIGATION: 'NAVIGATION',
  WATCH: 'WATCH',
} as const;

export const TicTacItemTypes = {
  ITEM: 'ITEM',
  WEAPON: 'WEAPON',
  MAGAZINE: 'MAGAZINE',
} as const;
