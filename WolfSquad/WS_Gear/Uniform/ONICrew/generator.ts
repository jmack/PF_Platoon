import fs from 'fs';
import sharp from 'sharp';
import { fileURLToPath } from 'url';
import { dirname } from 'path';
import { exec } from 'child_process';
import util from 'util';

/**
 * This file generates the file defs for the ONICrew uniform item.
 *
 * It can be run with "npm run generate:oniuniform" from the project root.
 */

/**
 * Classes, Types, and Consts
 */
const SCRIPT_DIR = dirname(fileURLToPath(import.meta.url));
const WOLF_SQUAD_ROOT_DIR = SCRIPT_DIR.substring(0, SCRIPT_DIR.search('WolfSquad') + 'WolfSquad'.length);
const WS_RANKS_DIR = `${WOLF_SQUAD_ROOT_DIR}\\WS_Ranks\\_textures`;

class MetaData {
  Label: string = '';
  Options: MetaDataOption[] = [];
}

class MetaDataOption {
  ClassName!: string;
  Label: string = '';
  AlwaysSelectable?: boolean;
  Values: MetaDataOptionValue[] = [];
}

class MetaDataOptionValue {
  ClassName!: string;
  Label?: string;
  Description?: string;
  ImgLink?: string;
  RankLocation?: RankImageLocationData;
  RankColor?: string;
}

interface RankImageLocationData {
  position: {
    x: number;
    y: number;
  };
  dimensions: {
    width: number;
    height: number;
  };
  rotation: number;
}

const RankImageLocation = {
  ARM: {
    position: {
      x: 1364,
      y: 1400,
    },
    dimensions: {
      width: 67,
      height: 136,
    },
    rotation: 2.5,
  },
  EPAULETTE: {
    position: {
      x: 1762,
      y: 1190,
    },
    dimensions: {
      width: 68,
      height: 146,
    },
    rotation: 2,
  },
} as const;

const RankImageColors = {
  WHITE: '#ffffff',
  DARKRED: '#610000',
  OFFICERGOLD: '#EFBF04',
} as const;

const UNIFORM_MATRIX: MetaData = {
  Label: 'ONI Crew Uniform',
  Options: [
    {
      ClassName: 'bodytype',
      Label: 'Body Type',
      AlwaysSelectable: true,
      Values: [
        {
          ClassName: 'masc',
          Label: 'Masc',
        },
        {
          ClassName: 'femme',
          Label: 'Femme',
        },
      ],
    },
    {
      ClassName: 'type',
      Label: 'Type',
      AlwaysSelectable: true,
      Values: [
        {
          ClassName: 'crew',
          Label: 'Crew',
          ImgLink: './_textures/uniforms/crew.png',
        },
        {
          ClassName: 'odst',
          Label: 'ODST',
          Description: 'Feet First Into Hell',
          ImgLink: './_textures/uniforms/odst.png',
        },
        {
          ClassName: 'medical',
          Label: 'Medical',
          ImgLink: './_textures/uniforms/medical.png',
        },
        {
          ClassName: 'vehicle',
          Label: 'Vehicle',
          ImgLink: './_textures/uniforms/vehicle.png',
        },
        {
          ClassName: 'engineering',
          Label: 'Engineering',
          ImgLink: './_textures/uniforms/engineering.png',
        },
      ],
    },
    {
      ClassName: 'rank',
      Label: 'Rank',
      AlwaysSelectable: false,
      Values: [
        {
          ClassName: 'none',
          Label: 'None',
          ImgLink: `${WS_RANKS_DIR}\\blank.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.WHITE,
        },
        {
          ClassName: 'navcom_cdr',
          Label: 'CDR',
          Description: 'O-5: Commander',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\O-5 Commander.png`,
          RankLocation: RankImageLocation.EPAULETTE,
          RankColor: RankImageColors.OFFICERGOLD,
        },
        {
          ClassName: 'navcom_lcdr',
          Label: 'LCDR',
          Description: 'O-4: Lieutenant Commander',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\O-4 Lieutenant Commander.png`,
          RankLocation: RankImageLocation.EPAULETTE,
          RankColor: RankImageColors.OFFICERGOLD,
        },
        {
          ClassName: 'navcom_lt',
          Label: 'LT',
          Description: 'O-3: Lieutenant',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\O-3 Lieutenant.png`,
          RankLocation: RankImageLocation.EPAULETTE,
          RankColor: RankImageColors.OFFICERGOLD,
        },
        {
          ClassName: 'navcom_ltjg',
          Label: 'LTJG',
          Description: 'O-2: Lieutenant Junior Grade',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\O-2 Lieutenant Junior Grade.png`,
          RankLocation: RankImageLocation.EPAULETTE,
          RankColor: RankImageColors.OFFICERGOLD,
        },
        {
          ClassName: 'navcom_ens',
          Label: 'ENS',
          Description: 'O-1: Ensign',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\O-1 Ensign.png`,
          RankLocation: RankImageLocation.EPAULETTE,
          RankColor: RankImageColors.OFFICERGOLD,
        },
        {
          ClassName: 'navcom_hnsc',
          Label: 'HNSC',
          Description: 'E-8: Senior Chief Hospital Corpsman',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-8 Senior Chief Hospital Corpsman.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.DARKRED,
        },
        {
          ClassName: 'navcom_cpo',
          Label: 'CPO',
          Description: 'E-7: Chief Petty Officer',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-7 Chief Petty Officer.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.WHITE,
        },
        {
          ClassName: 'navcom_hmc',
          Label: 'HMC',
          Description: 'E-7: Chief Hospital Corpsman',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-7 Chief Hospital Corpsman.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.DARKRED,
        },
        {
          ClassName: 'navcom_po1',
          Label: 'PO1',
          Description: 'E-6: Petty Officer First Class',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-6 Petty Officer First Class.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.WHITE,
        },
        {
          ClassName: 'navcom_hm1',
          Label: 'HM1',
          Description: 'E-6: Hospital Corpsman First Class',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-6 Hospital Corpsman First Class.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.DARKRED,
        },
        {
          ClassName: 'navcom_po2',
          Label: 'PO2',
          Description: 'E-5: Petty Officer Second Class',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-5 Petty Officer Second Class.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.WHITE,
        },
        {
          ClassName: 'navcom_hm2',
          Label: 'HM2',
          Description: 'E-5: Hospital Corpsman Second Class',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-5 Hospital Corpsman Second Class.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.DARKRED,
        },
        {
          ClassName: 'navcom_po3',
          Label: 'PO3',
          Description: 'E-4: Petty Officer Third Class',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-4 Petty Officer Third Class.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.WHITE,
        },
        {
          ClassName: 'navcom_hm3',
          Label: 'HM3',
          Description: 'E-4: Hospital Corpsman Third Class',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-4 Hospital Corpsman Third Class.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.DARKRED,
        },
        {
          ClassName: 'navcom_cn',
          Label: 'CN',
          Description: 'E-3: Crewman',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-3 Crewman.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.WHITE,
        },
        {
          ClassName: 'navcom_hn',
          Label: 'HN',
          Description: 'E-3: Hospitalman',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-3 Hospitalman.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.DARKRED,
        },
        {
          ClassName: 'navcom_ca',
          Label: 'CA',
          Description: 'E-2: Crewman Apprentice',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-2 Crewman Apprentice.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.WHITE,
        },
        {
          ClassName: 'navcom_ha',
          Label: 'HA',
          Description: 'E-2: Hospitalman Apprentice',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-2 Hospitalman Apprentice.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.DARKRED,
        },
        {
          ClassName: 'navcom_cr',
          Label: 'CR',
          Description: 'E-1: Crewman Recruit',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-1 Crewman Recruit.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.WHITE,
        },
        {
          ClassName: 'navcom_hr',
          Label: 'HR',
          Description: 'E-1: Hospitalman Recruit',
          ImgLink: `${WS_RANKS_DIR}\\navcom\\E-1 Hospitalman Recruit.png`,
          RankLocation: RankImageLocation.ARM,
          RankColor: RankImageColors.DARKRED,
        },
      ],
    },
  ],
};

/**
 * Main method body
 */
async function main() {
  const start = Date.now();
  let numImages = 0;
  let numClasses = 0;

  let metaitem: string = '';
  let cfgWeapons: string = '';
  let cfgVehicles: string = '';

  // clear out the combined dir if we're forcing a regenerate
  fs.rmSync(`${SCRIPT_DIR}/_textures/combined`, { recursive: true, force: true });
  fs.mkdirSync(`${SCRIPT_DIR}/_textures/combined`);

  /**
   * Step 1: Build the MetaItem
   */
  metaitem += `${t(3)}label = "${UNIFORM_MATRIX.Label}";\n${t(3)}options[] = {\n`;
  UNIFORM_MATRIX.Options.forEach((option) => {
    metaitem += `${t(4)}"${option.ClassName}",\n`;
  });
  metaitem += `${t(3)}};\n`;

  UNIFORM_MATRIX.Options.forEach((option) => {
    metaitem += `${t(3)}class ${option.ClassName}\n${t(3)}{\n`;
    metaitem += `${t(4)}label = "${option.Label}";\n`;
    metaitem += `${t(4)}alwaysSelectable = ${option.AlwaysSelectable ? '1' : '0'};\n`;
    metaitem += `${t(4)}values[] =\n${t(4)}{\n`;
    option.Values.forEach((value) => {
      metaitem += `${t(5)}"${value.ClassName}",\n`;
    });
    metaitem += `${t(4)}};\n`;

    option.Values.forEach((value) => {
      metaitem += `${t(4)}class ${value.ClassName}\n${t(4)}{\n`;
      metaitem += `${t(5)}label = "${value.Label}";\n`;
      if (value.Description) {
        metaitem += `${t(5)}description = "${value.Description}";\n`;
      }
      metaitem += `${t(4)}};\n`;
    });
    metaitem += `${t(3)}};\n`;
  });

  /**
   * Step 2: Build the base item for each body/type combo (the none rank)
   */
  const classes = getProduct(
    UNIFORM_MATRIX.Options[0]!.Values.map((v) => v.ClassName),
    UNIFORM_MATRIX.Options[1]!.Values.map((v) => v.ClassName),
    UNIFORM_MATRIX.Options[2]!.Values.map((v) => v.ClassName)
  );

  /**
   * Step 2: Build an Arsenal Def and Uniform Def for every combo we can
   */
  // combine each of these into a masc/femme pair (as they use the same image)
  const mfClassGroups: { [key: string]: string[][] } = {};
  classes.forEach((c) => {
    const key = `${c[1]}_${c[2]}`;
    if (!!mfClassGroups[key]) {
      mfClassGroups[key].push(c);
    } else {
      mfClassGroups[key] = [c];
    }
  });

  await Promise.all(
    Object.keys(mfClassGroups).map(async (textureName) => {
      // First, generate the texture (this is shared between all body types)
      const type = UNIFORM_MATRIX.Options[1]?.Values.find((o) => o.ClassName === mfClassGroups[textureName]![0]![1]);
      const rank = UNIFORM_MATRIX.Options[2]?.Values.find((o) => o.ClassName === mfClassGroups[textureName]![0]![2]);

      if (!type || !type.ImgLink || !rank || !rank.ImgLink) {
        console.error(`Could not find arguments to generate an image for ${textureName}`);
        console.error(mfClassGroups[textureName]);
        return;
      }

      const rankTextureData = {
        location: rank.RankLocation!,
        color: rank.RankColor!,
      };

      const texturePath = await createUniformImage(type.ImgLink, rank.ImgLink, rankTextureData, textureName);
      if (!texturePath) {
        return;
      }
      numImages++;

      // Generate classes (CfgWeapons and CfgVehicles)
      mfClassGroups[textureName]!.forEach((c) => {
        const body = UNIFORM_MATRIX.Options[0]?.Values.find((o) => o.ClassName === c[0]);

        if (!body) {
          console.error(`Failed to find match!! ${c}`);
          return;
        }

        const { long: classLong, short: classShort, texture: textureName } = className(body, type, rank);

        // CfgWeapons first
        cfgWeapons += `${t(1)}class ${classLong}: WS_Gear_Uniform_ONICrew_Base\n${t(1)}{\n`;
        // link between CfgWeapons def and CfgVehicles def
        cfgWeapons += `${t(2)}class XtdGearInfo\n${t(2)}{\n`;
        cfgWeapons += `${t(3)}model = "WS_Gear_Uniform_ONICrew_Metaitem";\n`;
        cfgWeapons += `${t(3)}bodytype = "${body.ClassName}";\n`;
        cfgWeapons += `${t(3)}type = "${type.ClassName}";\n`;
        cfgWeapons += `${t(3)}rank = "${rank.ClassName}";\n`;
        cfgWeapons += `${t(2)}};\n\n`;

        cfgWeapons += `${t(2)}scope = 2;\n`;
        cfgWeapons += `${t(2)}scopeCurator = 2;\n`;
        cfgWeapons += `${t(2)}scopeArsenal = 2;\n\n`;

        cfgWeapons += `${t(2)}class ItemInfo: ItemInfo\n${t(2)}{\n`;
        cfgWeapons += `${t(3)}uniformClass = "${classLong}";\n`;
        cfgWeapons += `${t(2)}};\n`;

        cfgWeapons += `${t(1)}};\n\n`;

        // CfgVehicles next
        cfgVehicles += `${t(1)}class ${classLong}: WS_Gear_Uniform_ONICrew_Base_${body.ClassName}\n${t(1)}{\n`;
        cfgVehicles += `${t(2)}uniformClass = "${classLong}";\n\n`;

        cfgVehicles += `${t(2)}scope = 2;\n`;
        cfgVehicles += `${t(2)}scopeCurator = 2;\n`;
        cfgVehicles += `${t(2)}scopeArsenal = 2;\n\n`;

        cfgVehicles += `${t(2)}hiddenSelectionsTextures[] =\n`;
        cfgVehicles += `${t(2)}{\n`;

        if (body.ClassName === 'femme') {
          // femme model has 2 textures, just duplicate ours twice
          cfgVehicles += `${t(3)}"${texturePath}",\n`;
        }
        cfgVehicles += `${t(3)}"${texturePath}"\n`;
        cfgVehicles += `${t(2)}};\n`;
        cfgVehicles += `${t(1)}};\n`;

        numClasses++;
      });
    })
  );

  let template = fs.readFileSync(`${SCRIPT_DIR}/config.cpp.tpl`).toString();

  template = template.replace('<% warning %>', 'AUTOGENERATED FILE. Edit config.cpp.tpl or generator.ts instead. Any changes to this file will be overwritten otherwise.');
  template = template.replace('<% metaitem %>', metaitem);
  template = template.replace('<% cfgWeapons %>', cfgWeapons);
  template = template.replace('<% cfgVehicles %>', cfgVehicles);

  try {
    fs.writeFileSync(`${SCRIPT_DIR}/config.cpp`, template);
  } catch (e) {
    console.error(e);
    return;
  }

  // and log the time it took to generate
  const genTime = Date.now() - start;

  // then, we binarize the new files
  const asyncExec = util.promisify(exec);
  try {
    const execString = `cd ${WOLF_SQUAD_ROOT_DIR}; . ..\\vars.ps1; Start-Process $imageToPAA ${SCRIPT_DIR}\\_textures\\combined\\*.png -Wait`;
    console.log(execString);
    const { stdout } = await asyncExec(execString, { shell: 'powershell.exe' });
    console.log(stdout);
  } catch (e) {
    console.error(e);
    return;
  }
  const binTime = Date.now() - start - genTime;

  console.log(
    `Done [ total ${(genTime + binTime) / 1000} seconds | generation ${genTime / 1000} seconds | binarization ${binTime / 1000} seconds | ${numImages} images | ${numClasses} classes ]`
  );
}

/**
 * Helpers
 */
function t(num: number): string {
  let s = '';
  while (s.length < num * 2) s += '  ';
  return s;
}

async function createUniformImage(
  uniformRelativePath: string,
  rankFullPath: string,
  rankTextureData: { location: RankImageLocationData; color: string },
  fileOutputName: string
): Promise<string | undefined> {
  const uniformFullPath = `${SCRIPT_DIR}/${uniformRelativePath}`;
  const outputFullPath = `${SCRIPT_DIR}/_textures/combined/${fileOutputName}.png`;

  if (!fs.existsSync(uniformFullPath)) {
    console.error(`Could not generate an image for ${fileOutputName} because ${uniformRelativePath} does not exist`);
    return;
  }

  if (!fs.existsSync(rankFullPath)) {
    console.error(`Could not generate an image for ${fileOutputName} because ${rankFullPath} does not exist`);
    return;
  }

  // destructure our rank transformation data
  const {
    location: { position: rankPosition, dimensions: rankDimensions, rotation: rankRotation },
    color: rankColor,
  } = rankTextureData;

  try {
    // converts our "grey-grey" rank images to "black-grey" so we can tint without making it obnoxious
    const rankBlkGrey = await sharp(rankFullPath)
      .composite([{ input: rankFullPath, blend: 'color-burn' }])
      .toBuffer();

    // the next two create a color layer, shape it into the same shape as our rank, and merge them
    const rankColorOverlay = await sharp({
      create: {
        height: 256,
        width: 128,
        channels: 4,
        background: `${rankColor}ff`,
      },
    })
      .png()
      .composite([{ input: rankBlkGrey, blend: 'dest-atop' }])
      .toBuffer();

    const rankColorBurned = await sharp(rankBlkGrey)
      .composite([{ input: rankColorOverlay, blend: 'color-burn' }])
      .toBuffer();

    // scale and rotate
    const rankFinalImg = await sharp(rankColorBurned)
      .resize({ height: rankDimensions.height, width: rankDimensions.width })
      .rotate(rankRotation, { background: '#00000000' })
      .toBuffer();

    // finally composite our rank over our base image and write it
    await sharp(uniformFullPath)
      .composite([
        {
          input: rankFinalImg,
          left: rankPosition.x,
          top: rankPosition.y,
        },
      ])
      .toFile(outputFullPath);
  } catch (e) {
    console.error(`An unknown error occurred while trying to generate ${fileOutputName}.png`, e);
    return;
  }

  return `WS_Gear\\Uniform\\ONICrew\\_textures\\combined\\${fileOutputName}.paa`;
}

// I have no memory of what the fuck this does anymore.
function getProduct(a: string[], b: string[], c: string[]): string[][] {
  // @ts-expect-error: implicitly has an 'any' type.ts(7006)
  const flatMap = (xs, f) => [].concat(...xs.map(f));
  // @ts-expect-error: implicitly has an 'any' type.ts(7006)
  const prepend = (x) => (ys) => [x].concat(ys);
  // @ts-expect-error: implicitly has an 'any' type.ts(7006)
  const prependEach = (xs, yss) => flatMap(xs, (x) => yss.map(prepend(x)));
  // @ts-expect-error: implicitly has an 'any' type.ts(7006)
  const product = (xs, ...rest) => (xs ? prependEach(xs, product(...rest)) : [[]]);

  return product(a, b, c);
}

function className(body: MetaDataOptionValue, type: MetaDataOptionValue, rank: MetaDataOptionValue): { texture: string; long: string; short: string } {
  const imgName = `${type.ClassName}_${rank.ClassName}`;
  const shortName = `${body.ClassName}_${imgName}`;
  return {
    texture: imgName,
    short: shortName,
    long: `WS_Gear_Uniform_ONICrew_${shortName}`,
  };
}

main();
