import { ItemDefinition, TicTacItemTypes } from './itemDefinition.type';

export type TicTac = {
  name: string;
  texture?: string;
  eventHandlers?: TicTacEvent[];
  preview?: string;
  contents: TicTacItem[];
};

export type TicTacItem = {
  itemDefinition: ItemDefinition;
  count: number;
};

export type TicTacEvent = {
  type: (typeof TicTacEventTypes)[keyof typeof TicTacEventTypes];
  value: string;
};

export const TicTacEventTypes = {
  INIT: 'init',
} as const;

export type TransportGroup = {
  container: string;
  class: string;
};

export const TransportGroupMap: { [key in keyof typeof TicTacItemTypes]: TransportGroup } = {
  [TicTacItemTypes.ITEM]: {
    container: 'TransportItems',
    class: 'name',
  },
  [TicTacItemTypes.MAGAZINE]: {
    container: 'TransportMagazines',
    class: 'magazine',
  },
  [TicTacItemTypes.WEAPON]: {
    container: 'TransportWeapons',
    class: 'weapon',
  },
};
