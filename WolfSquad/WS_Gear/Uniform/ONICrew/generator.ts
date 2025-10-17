import fs from 'fs';
import sharp from 'sharp';
import { fileURLToPath } from 'url';
import { dirname } from 'path';

/**
 * This file generates the file defs for the ONICrew uniform item.
 *
 * It can be run with "npx ts-node .\WolfSquad\WS_Gear\Uniform\ONICrew\generator.ts" from the project root.
 */

const start = Date.now();
let numImages = 0;
let numClasses = 0;

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
}

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
          ImgLink: './_textures/ranks/none.png',
        },
        {
          ClassName: 'cdr',
          Label: 'CDR',
          Description: 'O-5: Commander',
          ImgLink: './_textures/ranks/cdr.png',
        },
        {
          ClassName: 'lcdr',
          Label: 'LCDR',
          Description: 'O-4: Lieutenant Commander',
          ImgLink: './_textures/ranks/lcdr.png',
        },
        {
          ClassName: 'lt',
          Label: 'LT',
          Description: 'O-3: Lieutenant',
          ImgLink: './_textures/ranks/lt.png',
        },
        {
          ClassName: 'ltjg',
          Label: 'LTJG',
          Description: 'O-2: Lieutenant Junior Grade',
          ImgLink: './_textures/ranks/ltjg.png',
        },
        {
          ClassName: 'ens',
          Label: 'ENS',
          Description: 'O-1: Ensign',
          ImgLink: './_textures/ranks/ens.png',
        },
        {
          ClassName: 'hnsc',
          Label: 'HNSC',
          Description: 'E-8: Senior Chief Hospital Corpsman',
          ImgLink: './_textures/ranks/hnsc.png',
        },
        {
          ClassName: 'cpo',
          Label: 'CPO',
          Description: 'E-7: Chief Petty Officer',
          ImgLink: './_textures/ranks/cpo.png',
        },
        {
          ClassName: 'hmc',
          Label: 'HMC',
          Description: 'E-7: Chief Hospital Corpsman',
          ImgLink: './_textures/ranks/hmc.png',
        },
        {
          ClassName: 'po1',
          Label: 'PO1',
          Description: 'E-6: Petty Officer First Class',
          ImgLink: './_textures/ranks/po1.png',
        },
        {
          ClassName: 'hm1',
          Label: 'HM1',
          Description: 'E-6: Hospital Corpsman First Class',
          ImgLink: './_textures/ranks/hm1.png',
        },
        {
          ClassName: 'po2',
          Label: 'PO2',
          Description: 'E-5: Petty Officer Second Class',
          ImgLink: './_textures/ranks/po2.png',
        },
        {
          ClassName: 'hm2',
          Label: 'HM2',
          Description: 'E-5: Hospital Corpsman Second Class',
          ImgLink: './_textures/ranks/hm2.png',
        },
        {
          ClassName: 'po3',
          Label: 'PO3',
          Description: 'E-4: Petty Officer Third Class',
          ImgLink: './_textures/ranks/po3.png',
        },
        {
          ClassName: 'hm3',
          Label: 'HM3',
          Description: 'E-4: Hospital Corpsman Third Class',
          ImgLink: './_textures/ranks/hm3.png',
        },
        {
          ClassName: 'cn',
          Label: 'CN',
          Description: 'E-3: Crewman',
          ImgLink: './_textures/ranks/cn.png',
        },
        {
          ClassName: 'hn',
          Label: 'HN',
          Description: 'E-3: Hospitalman',
          ImgLink: './_textures/ranks/hn.png',
        },
        {
          ClassName: 'ca',
          Label: 'CA',
          Description: 'E-2: Crewman Apprentice',
          ImgLink: './_textures/ranks/ca.png',
        },
        {
          ClassName: 'ha',
          Label: 'HA',
          Description: 'E-2: Hospitalman Apprentice',
          ImgLink: './_textures/ranks/ha.png',
        },
        {
          ClassName: 'cr',
          Label: 'CR',
          Description: 'E-1: Crewman Recruit',
          ImgLink: './_textures/ranks/cr.png',
        },
        {
          ClassName: 'hr',
          Label: 'HR',
          Description: 'E-1: Hospitalman Recruit',
          ImgLink: './_textures/ranks/hr.png',
        },
      ],
    },
  ],
};

const workingDir = dirname(fileURLToPath(import.meta.url));

async function main() {
  let metaitem: string = '';
  let cfgWeapons: string = '';
  let cfgVehicles: string = '';

  // clear out the combined dir if we're forcing a regenerate
  fs.rmSync(`${workingDir}/_textures/combined`, { recursive: true, force: true });
  fs.mkdirSync(`${workingDir}/_textures/combined`);

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

      const texturePath = await createUniformImage(type.ImgLink, rank.ImgLink, textureName);
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

  let template = fs.readFileSync(`${workingDir}/config.cpp.tpl`).toString();

  template = template.replace('<% warning %>', 'AUTOGENERATED FILE. Edit config.cpp.tpl or generator.ts instead. Any changes to this file will be overwritten otherwise.');
  template = template.replace('<% metaitem %>', metaitem);
  template = template.replace('<% cfgWeapons %>', cfgWeapons);
  template = template.replace('<% cfgVehicles %>', cfgVehicles);

  try {
    fs.writeFileSync(`${workingDir}/config.cpp`, template);
  } catch (e) {
    console.error(e);
  }

  const time = Date.now() - start;
  console.log(`Done [ ${time / 1000} seconds | ${numImages} images | ${numClasses} classes ]`);
}

/**
 * Helpers
 */
function t(num: number): string {
  let s = '';
  while (s.length < num * 2) s += '  ';
  return s;
}

async function createUniformImage(uniformRelativePath: string, rankRelativePath: string, fileOutputName: string): Promise<string | undefined> {
  const uniformFullPath = `${workingDir}/${uniformRelativePath}`;
  const rankFullPath = `${workingDir}/${rankRelativePath}`;
  const outputFullPath = `${workingDir}/_textures/combined/${fileOutputName}.png`;

  if (!fs.existsSync(uniformFullPath) || !fs.existsSync(rankFullPath)) {
    console.error(`Could not generate an image for ${fileOutputName} because ${uniformRelativePath} does not exist`);
    return;
  }

  if (!fs.existsSync(rankFullPath)) {
    console.error(`Could not generate an image for ${fileOutputName} because ${rankFullPath} does not exist`);
    return;
  }

  try {
    await sharp(uniformFullPath)
      .composite([{ input: rankFullPath }])
      .toFile(outputFullPath);
  } catch (e) {
    console.error(`An unknown error occurred while trying to generate ${fileOutputName}.png`, e);
    return;
  }

  return `WS_Gear\\Uniform\\ONICrew\\_textures\\combined\\${fileOutputName}.paa`;
}

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
